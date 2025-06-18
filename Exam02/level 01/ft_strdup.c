#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *src) 
{
	int	i = 0;
	char *duplicate;
	
	while(src[i] != '\0')
		i++;

	duplicate = malloc(i + 1);
	if (duplicate == NULL)
		return NULL;
	
	i = 0;
	while (src[i] != '\0')
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return duplicate;
}
