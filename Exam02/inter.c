#include <unistd.h>

void inter(char *a, char *b)
{
	char ascii[256];
	int i = 0;

	while(b[i] != '\0')
	{
		ascii[(int)b[i]] = 1;
		i++;
	}

	i = 0;
	while(a[i] != '\0')
	{
		if (ascii[(int)a[i]] == 1)
		{
			write(1, &a[i], 1);
			ascii[(int)a[i]] = 2;
		}
		i++;
	}	
}

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
