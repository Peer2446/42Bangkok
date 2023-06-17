#include <unistd.h>
#include <stdio.h>
void	swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int	strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	sort(int argv, char *argc[])
{
	int	i;
	int	j;
	if (argv == 1 )
		return ;
	i = 0;
	while (i < argv)
	{
		j = i + 1;
		while (j < argv)
		{
			if (strcmp(argc[i] , argc[j]) > 0)
				swap(argc + i, argc + j);
			j++;
		}
		i++;
	}
}

int	main(int argv, char *argc[])
{
	int	j;

	j = 0;
	sort(argv, argc);
	while (j < argv)
	{
		printf("%s\n",argc[j]);
		j++;	
	}
}
