#include <unistd.h>

int ft_atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return sign * result;
}

void ft_putnbr(int n)
{
	char c;

	if (n > 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void tab_mult(char *str)
{
	int n = ft_atoi(str);
	int i = 1;

	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		tab_mult(argv[1]);
	write(1, "\n", 1);
	return 0;
}
