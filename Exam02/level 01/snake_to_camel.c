#include <unistd.h>

void snake_to_camel(char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		if (str[i] == '_')
		{
			i++;
			c = str[i] - 32;		
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
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return 0;
}
