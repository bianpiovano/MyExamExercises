#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	int flag = 0;

	while (str[i] != '\0')
	{
		char c;

		if (str[i] == ' ' || str[i] == '\t')
		{
			flag = 0;
			c = str[i];
		}
		else if (flag == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				c = str[i] - 32;
			else
				c = str[i];
			flag = 1;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				c = str[i] + 32;
			else
				c = str[i];
		}
		write(1, &c, 1);
		i++;
	}
}

int main (int argc, char *argv[])
{
	if (argc == 2)
		str_capitalizer(argv[1]);
	write(1, "\n", 1);
	return 0;
}
