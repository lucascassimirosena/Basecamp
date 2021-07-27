#include	<unistd.h>

void	ft_put_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	l;
	char	u;
	char	s;

	l = '0';
	while (l <= '7')
	{
		u = l + 1;
		while (u <= '8')
		{
			s = u + 1;
			while (s <= '9')
			{
				ft_put_num(l, u, s);
				s++;
			}
			u++;
		}
		l++;
	}
}
