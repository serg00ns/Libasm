#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>


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


	int ret = ft_write(-1, "hello world\n", 12);
	printf("%s %s\n", a, b);
	printf("len = %d, errno = %d\nret=%d\n", ft_strcmp(a, b), *(__errno_location()), ret);
	return 0;
}
