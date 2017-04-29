int	ft_iterative_factorial(int nb)
{
	if(nb <= 0 || nb > 13)
		return (0);
	int i;
	int result;

	i = 0;
	result = nb;
	while(nb > 1)
	{
		result *= (--nb);
	}
	return (result);
}
