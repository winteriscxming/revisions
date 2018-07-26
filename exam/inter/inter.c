/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   inter.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jmanevy <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/26 16:32:43 by jmanevy      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/26 17:23:20 by jmanevy     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_inter(char *str1, char *str2)
{
	int i;
	int j;
	int k;

	k = 0;
	j = 0;
	i = 0;
	while (str1[i])
	{
		while (str2[j])
		{
			k = 0;
			if (str1[i] == str2[j])
			{
				while (str1[k] != str1[i] && k != i)
					k++;
				if (k == i)
				{
					ft_putchar(str1[i]);
					i++;
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	return (0);
}
