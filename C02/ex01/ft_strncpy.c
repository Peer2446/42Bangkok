#include <unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (n-- && *dest != '\0')
	{
		if (*src != '\0')
		{
			*dest++ = *src++;
		}
		else
		{
			*dest++ = '\0';
		}
	}
	return (*dest);
}
