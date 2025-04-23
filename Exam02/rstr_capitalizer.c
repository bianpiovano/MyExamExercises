#include <unistd.h>

int is_end_char(int c)
{
	if(c == '\0' || c == '\t' || c == ' ')
	{
		return(1);
	}
	return(0);
}

void rstr_capitalizer(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		char c = str[i]; 
		if((c >= 'a' && c <= 'z') && is_end_char(str[i + 1]))
			c -= 32;
		else if((c >= 'A' && c <= 'Z') && !is_end_char(str[i + 1]))
			c += 32;

		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char *argv[])
{
	int i = 1;
	if(argc > 1)
	{
		while(i < argc)
		{
			rstr_capitalizer(argv[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}
