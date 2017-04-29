#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char *argv[])
{
	int i = 0;
	int x = 1;
	while(x < argc)
	{
		i = ft_recursive_power(atoi(argv[x++]),atoi(argv[x++]));
		printf("%d\n", i);
	}
	return (0);
}
