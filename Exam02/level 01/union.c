#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int i = 0;
	char ascii[256] = {0};

	while(s1[i] != '\0')
	{
		if (!ascii[s1[i]])
		{
			ascii[s1[i]] = 1;
			write(1, &s1[i], 1);
		}
		i++;
	}

	i = 0;
	while(s2[i] != '\0')
	{
		if (!ascii[s2[i]])
		{
			ascii[s2[i]] = 1;
			write(1)
		}
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
