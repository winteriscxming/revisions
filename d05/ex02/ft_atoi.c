int		ft_atoi(char *str)
{
	int i;
	int n;
	int res;

	i = 0;
	n = 0;
	res = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == '\n') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		n++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (n == 1)
		return (-res);
	else
		return (res);
}
