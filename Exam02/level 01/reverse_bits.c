unsigned char reverse_bits(unsigned char octet)
{
	int i = 0;
	unsigned char result = 0;

	while (i < 8)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return result;
}
