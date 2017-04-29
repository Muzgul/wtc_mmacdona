int	ft_iterative_power(int nb, int power)
{
	if(nb < 1 || power < 1)
		return (0);
	int i;

	i = 1;
	while(power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
