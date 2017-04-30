int	ft_sqrt(int nb)
{
	if(nb < 1 || nb > 10)
		return (0);
	int i;
	int x;
	
	if(nb == 1)
		return (1);
	x = nb - 1;
	while(x > 0 && nb / x != x)
		x--;
	if(nb % x != 0)
		return (0);
	return (x);
}
