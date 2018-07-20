char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
			i++;
	}
	i = 0;
	return (str);
}
