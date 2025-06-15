#include <unistd.h>

void ft_putword(char *str, int start, int len)
{
	write(1, str + start, len);
}

void rostring(char *str)
{
	int i = 0;
	int flag = 0;
	int start = 0;
	int len = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i++;

	start = i;

	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		len++;
		i++;
	}

	while (str[i] == ' ' || str[i] == '\t')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (flag == 1)
				write(1, " ", 1);
			flag = 1;

			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		else
			i++;
	}

	if (len > 0)
	{
		if (flag == 1)
			write(1, " ", 1);
		ft_putword(str, start, len);
	}
}

int main(int argc, char *argv[])
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return 0;
}
