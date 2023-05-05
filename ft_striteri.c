#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		(*f)(i, &s[i]);
}

/*void	ft_add(unsigned int i, char *s)
{
	printf("%c\n", s[i]);
}

int	main(void)
{
	char	str[] = "sup bitch";
	void (*f)(unsigned int, char*);
	ft_striteri(str, ft_add);
}*/
