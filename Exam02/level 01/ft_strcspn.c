#include <stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;

	while(s[i] != '\0')
	{
		while(reject[j] != '\0')
		{
			if (reject[j] == s[i])
				return i;
			j++;
		}
		j = 0;
		i++;
	}
	return i;
}
