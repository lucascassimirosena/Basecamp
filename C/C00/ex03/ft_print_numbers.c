#include <unistd.h>

void	ft_print_numbers(void)
{
	char	alpha;

	alpha = '0';
	while (alpha <= '9')
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
