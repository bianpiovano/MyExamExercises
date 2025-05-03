#include <unistd.h>

void inter(char *s1, char *s2)
{
	char ascii[256] = {0};
	int i = 0;

	while(s2[i] != '\0')
	{
		ascii[(int)s1[i]] = 1;
		i++;
	}

	i = 0;
	while(s1[i] != '\0')
	{
		if (ascii[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			ascii[(int)s1[i]] = 2;
		}
		i++;
	}	
}

int main(int argc, char *argv[])
{
	if (argc == 3)
		inter(argv[1], argv[2]);

	write(1, "\n", 1);
	return 0;
}
