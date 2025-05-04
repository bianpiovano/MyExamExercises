#include <unistd.h>

void camel_to_snake(char *str)
{
	int i = 0;
	char c;

	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			c = str[i] + 32; 
		}
		else
			c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return 0;
}
