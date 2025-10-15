#include <stdio.h>

int ft_write(int fd, char *buf, int size);
int ft_read(int fd, char *buf, int size);
size_t ft_strlen(char *buf);
char *ft_strcpy(char *restrict dst, const char *restrict src);


int main()
{
	char *str = "hello world";
	char store[15];
	printf("len = %s\n", ft_strcpy(store, str));
	return 0;
}
