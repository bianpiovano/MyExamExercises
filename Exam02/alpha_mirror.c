#include <unistd.h>

void mirror(char *str)
{
	int i = 0;
	char newchar;
	

	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			newchar = 'a' + ('z' - str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			newchar = 'A' + ('Z' - str[i]);
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
		mirror(argv[1]);
	}
	write(1, "\n", 1);
}
