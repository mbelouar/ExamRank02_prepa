#include <unistd.h>
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

int main()
{
    unsigned char octet = 65;
    printf("%u", reverse_bits(octet));
}