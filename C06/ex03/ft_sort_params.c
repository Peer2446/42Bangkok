#include <unistd.h>

int	main(int argv, char *argc[])
{
	int	j;

	while (--argv)
	{
		j = 0;
		while (argc[argv][j] != '\0')
		{
			write(1, &argc[argv][j], 1);
			j++;
		}
		write(1, "\n", 1);	
	}
}
