#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
			i++;
		i--;
		while (i > 0)
		{
			ft_putstr(argv[i]);
			i--;
			ft_putchar('\n');
		}
	}
	return (0);
}
