#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int x;

	x = 0;

	while (x < 8)
	{	
		int y;

		y = x+1;
		while (y < 9)
		{
			int z;

			z = y+1;
			while (z < 10)
			{
				ft_putchar(x+'0');
				ft_putchar(y+'0');
				ft_putchar(z+'0');
				if(x<7 || y<8 || z<9)
				{
					ft_putchar(',');
				}

				z++;						
			}

			y++;

		}
		
		x++;
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}
