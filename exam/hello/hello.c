/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   hello.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmanevy <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 15:43:41 by jmanevy      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 15:46:23 by jmanevy     ###    #+. /#+    ###.fr     */
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

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	ft_putstr("Hello World!\n");
	return (0);
}
