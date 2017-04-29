int	ft_recursive(int nb, int power)
{
	if(power < 1)
		return (1);
	return nb * ft_recursive(nb, power - 1);
}

int	ft_recursive_power(int nb, int power)
{
	if(nb < 1 || power < 1)
		return 0;
	return ft_recursive(nb, power);
}
