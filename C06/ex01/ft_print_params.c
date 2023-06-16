#include <unistd.h>
#include <stdio.h>

int	main(int argv, char *argc[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argv)
	{
		j = 0;
		while (argc[i][j] != '\0')
		{
			write(1, &argc[i][j], 1);
			j++;
		}
		write(1, "\n", 1);	
		i++;
	}
}
