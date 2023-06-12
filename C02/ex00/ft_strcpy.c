#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	while ((*dest != '\0') && (*src != '\0'))
	{
		*dest++ = *src++;
	}
	return (*dest);
}
