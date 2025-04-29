#include <unistd.h>

void print_words(char *str)
{
	int i = 0;
	char c;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			c = str[i] + 32;
		else
			c = str[i];
		write(1, &c, 1);	
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		print_words(argv[1]);
	write(1, "\n", 1);
	return 0;
}