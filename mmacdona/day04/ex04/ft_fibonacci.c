int	ft_fibonacci(int index)
{
	if(index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (index);
}
