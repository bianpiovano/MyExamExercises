#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
        {
            return ((char *)s);
        }
        s++;
    }
    return NULL;
}

void wdmatch(char *s1, char *s2)
{
	int i = 0;
	char *pos = s2;

	while (s1[i])
	{
		pos = ft_strchr(pos, s1[i]);
		if (!pos)
			return;
		pos++;
		i++;
	}
	write(1, s1, i);
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
