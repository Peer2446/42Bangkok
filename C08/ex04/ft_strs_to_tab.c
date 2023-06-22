#include <stdlib.h>
#include "ft_stock_str.h"

int	len(char *s)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	char	*ptr;
	
	i = 0;
	ptr = malloc((len(str) + 1) * sizeof(char));
	i = 0;
	while (*(str + i))
	{
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int	i;        
	
	i = 0;
	if (ac < 1)
		return (0);
	stock = malloc((ac + 1) * sizeof(t_stock_str));
	if (!stock)
		return (0);
	while(ac--)
	{
		(stock + i)->size = len(*(av + i));
		(stock + i)->str = *(av + i);
		(stock + i)->copy = ft_strdup(*(av + i));
		i++;
	}
	(stock + i)->str = 0;
	return (stock);
}
