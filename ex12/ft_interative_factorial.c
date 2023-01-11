#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0 || nb > 15)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		while (nb >= 2)
			res *= --nb;
	}
	return (res);
}
