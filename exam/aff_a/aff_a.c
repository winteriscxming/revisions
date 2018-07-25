/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_a.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmanevy <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/25 15:42:20 by jmanevy      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 16:06:44 by jmanevy     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	int g;

	i = 0;
	g = 0;
	while (str[i])
	{
		if (str[i] == 97 && g == 0)
		{
			ft_putchar('a');
			g++;
		}
		i++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a\n", 1);
	else
		ft_putstr(argv[1]);
	return (0);
}
