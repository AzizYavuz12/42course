#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// Bu fonksiyon, dosya tanımlayıcısından okuma yapar ve içeriği ekrana yazar
void oku_ve_yazdir(int fd)
{
    char buffer[128];
    ssize_t okunan = read(fd, buffer, sizeof(buffer) - 1);

	if (okunan == -1)
	{
		perror("Dosyadan okuma hatası");
		return ;
	}

	buffer[okunan] = '\0';
	printf("Fonksiyondan okunan içerik:\n%s", buffer);
}

int	main(void)
{
    const char *filename = "dosya.txt";
    const char *metin = "Merhaba, bu bir fonksiyonel dosya örneğidir!\n";

    // Dosyayı oluştur ve yazmak için aç
	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Dosya açılamadı");
		return (1);
	}

	// Dosyaya yaz
    if (write(fd, metin, strlen(metin)) == -1)
	{
		perror("Yazma hatası");
		close(fd);
		return (1);
	}
	get_next_line(fd);
	/* // Okuma yapmadan önce dosya imlecini başa al
    lseek(fd, 0, SEEK_SET);

    // Fonksiyona dosya tanımlayıcısını ver
    oku_ve_yazdir(fd);

    close(fd);
    return 0; */
}
