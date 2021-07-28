#include <unistd.h>

void	print_comb2(int a, int b)
{
	write(1, &a, 1);
	write(1, &b, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb2(void)
{
	int	d;
	int	e;
	int	f;
	int	g;

	f = 98;
	g = 99;
	d = 00;
	while (d <= f)
		e = d + 1;
	while (e <= g)
	{
		print_comb2(d, e);
		e++;
	}
	d++;
}
