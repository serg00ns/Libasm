#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int ft_write(int fd, char *buf, int size);
int ft_read(int fd, char *buf, int size);
size_t ft_strlen(char *buf);
char *ft_strcpy(char *restrict dst, const char *restrict src);
char *ft_strdup(char *str);
int ft_strcmp(const char *s1, const char *s2);




int main()
{
	char *a = ft_strdup("ba");
	char *b = ft_strdup("bh");
	int	 len_a = ft_strlen(a);
	printf("len_a %d\n", len_a);
	printf("a = %s\nb = %s\n", a, b);
	printf("write:");
	int return_write = ft_write(1, a, 2);
	ft_write(1, "\n", 1);
	printf("\nreturn_write = %d\n", return_write);
	return_write = ft_write(-1, "hello\n", 6);
	printf("on error write return value %d errno value %d\n", return_write, *(__errno_location()));

	printf("read:");
	char buf[32];
	memset(buf, 0, 32);
	int return_read = ft_read(0, buf, 30);
	printf("\nreturn_read = %d\n", return_read);
	return_read = ft_read(-1, buf, 6);
	printf("on error read return value %d errno value %d\n", return_read, *(__errno_location()));
	printf("buffer = %s\n", buf);
	return 0;
}
