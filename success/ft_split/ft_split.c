#include <unistd.h>
#include <stdlib.h>

char **ft_split(char *str)
{
	int i = 0;
	int j;
	int k = 0;
	char **split;

	if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		j = 0;
		if (!(split[k] = (char *) malloc(sizeof(char) * 4096)))
			return NULL;
		while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			split[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = '\0';
	return (split);
}
