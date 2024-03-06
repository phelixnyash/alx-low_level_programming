#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string containing the binary representation
 *
 * Return: The converted unsigned int, or 0 if invalid input.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
		{
			/* Invalid character in the string */
			return (0);
		}
	}

	return (result);
}

int main(void)
{
	const char *binary_number = "110101";
	unsigned int result;

	result = binary_to_uint(binary_number);

	if (result != 0)
		printf("Binary: %s, Unsigned Int: %u\n", binary_number, result);
	else
		printf("Invalid binary input.\n");

	return (0);
}
