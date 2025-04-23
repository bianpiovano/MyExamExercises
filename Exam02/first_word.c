#include <unistd.h>

void printword(char *str)
{
	int i = 0;
	int word = 0;

	while(str[i])
	{
			if (str[i] == ' ' || str[i] == '\t')
			{
				if (word == 1)
				{
					break;
				}
			}
			else
			{
				word = 1;
				write(1, &str[i], 1);
			}
			i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		printword(argv[1]);
	}
	write(1, "\n", 1);
}
