int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit = 0;
	int i = 0;

	if (str[i] == '\0' || str_base < 2 || str_base > 16)
		return 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while(str[i] != '\0')
	{
		char c = str[i];
					
		if (c >= 'A' && c <= 'Z')	
			c = c + 32;
		if (c >= '0' && c <= '9')
			digit = c - '0';
		else if (c >= 'a' && c <= 'f')
			digit = 10 + c - 'a';
		else
			break;
	
		if (digit >= str_base)
			break;

		result = result * str_base + digit;
		i++;
	}
	return result * sign;
}
