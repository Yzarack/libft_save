int		ft_space(const char *nptr)
{
	int i;

	i = 0;
	while (nptr[i] <= ' ')
		i++;
	return (i);
}

int		ft_atoi(const char *str)
{
int		div;
int		result;
int		i;

	i = ft_space(str);
	result = 0;
	div = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i + 1])
		i++;
	while (str[i] != '-' && i - ft_space(str) != -1 && 
	str[i] != '+')
	{
		result = div * (str[i] - '0') + result;
		div *= 10;
		i--;
	}
	if (str[ft_space(str)] == '-')
		return (result * -1);
	return (result);
}
