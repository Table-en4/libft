#include "libft.h"

int main(void)
{
	char	**splitted;
	int	i;

	i = 0;
	splitted = ft_split(NULL, 0);
	if (!splitted)
		return (1);
	while (i < 7 && splitted[i])
		printf("%s\n", splitted[i++]);
	i = 0;
	while (splitted[i])
		free(splitted[i++]);
	free(splitted);
	return (0);
}
