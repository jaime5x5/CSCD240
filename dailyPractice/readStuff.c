#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd;
	int res, num;

	fd = open("test.txt", O_RDONLY);

	res = read(fd, &num, sizeof(int));

	while(res != 0){

		printf("res is: %d\n", res);
		printf("num is: %d\n", num);
		res = read(fd, &num, sizeof(int));
	}

	close(fd);

	return 0;
}