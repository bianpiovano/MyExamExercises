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
	return result * sign;
}

void ft_putnbr(int n)
{
	char c;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
}

int calculate_prime(int n)
{
	int i = 2;

	if (n <= 1)
		return 0;
	while (i < n)
	{
		if (n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void add_prime_sum(int n)
{
	int sum = 0;

	while (n > 0)
	{
		if (calculate_prime(n))
			sum = sum + n;
		n--;
	}
	ft_putnbr(sum);
}

int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		add_prime_sum(ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return 0;
}
