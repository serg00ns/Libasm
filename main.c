#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int ft_write(int fd, char *buf, int size);
int ft_read(int fd, char *buf, int size);
size_t ft_strlen(char *buf);
char *ft_strcpy(char *restrict dst, const char *restrict src);
char *ft_strdup(char *str);
int ft_strcmp(const char *s1, const char *s2);

int main()
{
	char *a = ft_strdup("ba");
	char *b = ft_strdup("bm");
	ft_write(1, "hello\n", 6);
	ft_write(-1, "error", 5);
	printf("errno -> %d\n", errno);
	printf("len = %d\n", ft_strcmp(a, b));
	return 0;
}
