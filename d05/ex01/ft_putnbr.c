void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int nb1;
	
	nb1 = nb;
	if (nb < 0)
	{
		ft_putchar(-);
		nb1 = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
