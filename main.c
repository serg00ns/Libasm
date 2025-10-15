#include <stdio.h>
#include <stdlib.h>

int ft_write(int fd, char *buf, int size);
int ft_read(int fd, char *buf, int size);
size_t ft_strlen(char *buf);
char *ft_strcpy(char *restrict dst, const char *restrict src);
char *ft_strdup(char *str);

int main()
{
	char *a = ft_strdup("hello world");
	a[5] = '5';
	printf("len = %s\n", a);
	return 0;
}
