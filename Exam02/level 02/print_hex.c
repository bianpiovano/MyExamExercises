#include <unistd.h>

int ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return sign * result;
}

void print_hex(unsigned int n)
{
	char digits[] = "0123456789abcdef";

	if (n >= 16)
		print_hex(n / 16);
	write(1, &digits[n % 16], 1);
}

int main(int argc, char *argv[])
{
	int n = ft_atoi(argv[1]);

	if (argc == 2)
		print_hex(n);
	write(1, "\n", 1);
	return 0;
}
