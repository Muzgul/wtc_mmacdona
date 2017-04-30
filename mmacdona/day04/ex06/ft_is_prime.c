int	ft_is_prime(int nb)
{
	if(nb < 2)
		return (0);
	int i;

	i = nb - 1;
	while(nb % i != 0)
	{
		i--;
	}
	if(i > 1)
		return (0);
	return (1);
}
