#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if(s)
	{
		write(fd, s, ft_strlen(s));
	}
}

/*int main(void)
{
	ft_putstr_fd("motto motto", 1);
	printf("\n");
}*/
