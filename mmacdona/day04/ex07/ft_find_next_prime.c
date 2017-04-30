int	ft_find_next_prime(int nb)
{
	if(nb < 2)
		return (2);
	int i;

	i = nb - 1;
	while(nb < 2147483647 && i > 1)
	{
		if(nb % i == 0)
		{
			nb++;
			i = nb - 1;
		}
		else
			i--;
	}
	return (nb);
}	
