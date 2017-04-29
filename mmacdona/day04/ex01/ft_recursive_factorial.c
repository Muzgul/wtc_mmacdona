int	ft_recursive(int nb)
{
	if(nb == 1)
		return nb;
	return nb * ft_recursive(nb - 1);
}
int	ft_recursive_factorial(int nb)
{
	if(nb <= 0 || nb > 13)
		return (0);
	return ft_recursive(nb);
}
