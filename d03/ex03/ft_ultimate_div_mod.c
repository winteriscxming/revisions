void	ft_ultimate_div_mod(int *a, int *b)
{
	int temporaire;

	temporaire = a;

	*a  =  *a / *b;
	*b = temporaire % *b;
}
