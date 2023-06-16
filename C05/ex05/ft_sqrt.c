#include <stdio.h>
int	ft_sqrt(int n)
{
	int	a;
	int	mid;
	int	b;
	a = 0;
	mid = n / 2;
	b = n;
	if (n < 1)
		return (0);
	if (n == 1)
		return (1);
	while (a != mid)
	{
		while (mid > 46340)
			mid /= 2;
		if (mid * mid > n)
			b = mid;
		else if (mid * mid == n)
			return (mid);
		else
			a = mid;
		mid = (b + a) / 2;
	}
	return (mid);
}
int main()
{
	printf("%d",ft_sqrt(13423424));
}
