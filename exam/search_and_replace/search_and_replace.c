/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   search_and_replace.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmanevy <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 15:47:30 by jmanevy      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/24 15:57:40 by jmanevy     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, char src, char rep)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == src)
			str[i] = rep;
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{	
		ft_putchar('\n');
		return (0);
	}
	else
		ft_putstr(argv[1], argv[2][0], argv[3][0]);
	return (0);
}	
