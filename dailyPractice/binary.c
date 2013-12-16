#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;

	fd = open("test.txt", O_CREAT|O_WRONLY, 0777);

	int fd2 = open("test.txt", O_RDONLY);

	fd = open("test.bin", O_CREAT|O_WRONLY, 0777);

	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d\n", x);
		write(fd, &x, sizeof(int));

	}
	close(fd);

	return 0;
}
