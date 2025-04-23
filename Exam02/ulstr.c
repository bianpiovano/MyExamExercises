#include <unistd.h>

void print_words(char *str)
{
	int i = 0;
	char newchar;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			newchar = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			newchar = str[i] + 32;
		}
		else
		{
			newchar = str[i];
		}
		write(1, &newchar, 1);	
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		print_words(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
