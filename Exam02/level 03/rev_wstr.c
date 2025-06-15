#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

void write_word(char *str, int start, int end)
{
	while (start <= end)
		write(1, &str[start++], 1);
}

void rev_wstr(char *str)
{
	int i = ft_strlen(str) - 1;
	int end, start;
	int first = 1;

	while (i >= 0)
	{
		if(str[i] != ' ' && str[i] != '\t')
		{
			end = i;
			while (i >= 0 && str[i] != ' ' && str[i] != '\t')
				i--;
			star = i  + 1;
			if (!first)
				write(1, " ", 1);
			write_word(str, start, end);
			first = 0;
		}
		else 
			i--;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	   rev_wstr(argv[1]);
	write(1, "\n", 1);
	return 0;
}
