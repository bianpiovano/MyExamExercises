#include <unistd.h>

void epur_str(char *str)
{
	int i = 0;
	int word = 0;
	int end = 0;
	
	while(str[i] == ' ' || str[i] == '\t')
	{
		i++;
	}
	
	end = i;
	while (str[end])
	{
		end++;
	}
	while (end > i && (str[end - 1] == ' ' || str[end - 1] == '\t'))
		end--;
	
	while (i < end)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (word)
			{
				write(1, " ", 1);
			}
			word = 0;
		}
		else
		{
			write(1, &str[i], 1);
			word = 1;
		}
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		epur_str(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
