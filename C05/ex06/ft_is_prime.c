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
int	ft_is_prime(int n)
{
	int	sqrt;

	if (n < 2)
		return (0);
	sqrt = (ft_sqrt(n) + 1) / 2;
	while(sqrt--)
	{
		if (n % sqrt == 0)
			return (0);
	}
	return (1);
}

int main()
{
	for(int i =0;i<100;i++){
	printf("%d %d",i,ft_is_prime(i));}
}
