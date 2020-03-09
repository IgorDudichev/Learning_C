#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putstr(char *nbr)
{
	while (*nbr != '\0')
	{
		ft_putchar(*nbr++);
	}
}

int	main()
{
	char a[] = "Hello World!";
	ft_putstr(a);
	ft_putstr("\n");
	return 0;
}
