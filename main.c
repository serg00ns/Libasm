#include <stdio.h>

int ft_write(int fd, char *buf, int size);
int ft_read(int fd, char *buf, int size);
size_t ft_strlen(char *buf);

int main()
{
	char *str = "hello world";
	printf("len = %ld\n", ft_strlen(str));
	return 0;
}
