#include <unistd.h>

void expand(char *str)
{
	int i = 0;
	int flag = 0;
	
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			flag = 1;
			write(1, "   ", 3);
		}
		else if (str[i] == ' ' || str[i] == '\t' && flag == 1)
			i++;
		else if (str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
	i++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 2)
		expand(argv[1]);
	write(1, "\n", 1);
	return 0;
}
