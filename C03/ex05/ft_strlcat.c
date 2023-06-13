#include <unistd.h>
int	len(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}
//https://documentation.help/Cpp/strlcat.htm
unsigned int	i*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lens;
	unsigned int	lend;
	unsigned int	i;

	i = 0;
	lend = len(dest);
	lens = len(src);
	if (size < 1)
		return (lens + size);
	while ((i < size - 1) && (*src != '\0'))
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[i + lend] = '\0';
	if (size > lend)
		return lens + lend;
	else
		return lens + size;
}
