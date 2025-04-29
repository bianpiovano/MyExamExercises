#include <unistd.h>

void ft_putnbr(int n)
{
	char c;
	if(n >= 10)
		ft_putnbr(n / 10);
	c = 48 + n % 10;
	write(1, &c, 1);
}

void fizzbuzz()
{
	int n = 1;
	while(n <= 100)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		if (n % 5 == 0)
			write(1, "buzz", 4);
		if (n % 3 != 0 && n % 5 != 0)
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}

int main(int argc, char *argv[])
{
	if(argc == 1)
		fizzbuzz();
	return 0;
}
