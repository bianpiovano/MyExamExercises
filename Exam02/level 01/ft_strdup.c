#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *src) 
{
	int	i = 0;
	int length = 0;
	char *duplicate; 
	
	while(src[i] != '\n')
		length++;

	duplicate = (char *)malloc((length + 1));

	if (duplicate == NULL)
		return NULL;

	while (i < length)
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\n';

	return duplicate;
}
