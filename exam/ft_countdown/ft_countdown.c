/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countdown.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmanevy <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/26 12:08:05 by jmanevy      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 14:48:39 by jmanevy     ###    #+. /#+    ###.fr     */
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

	i = 9;
	while (str[i] >= '0')
	{
		ft_putchar(str[i]);
		i--;
	}
	ft_putchar('\n');
}

int 	main()
{
	ft_putstr("0123456789");
	return (0);
}
