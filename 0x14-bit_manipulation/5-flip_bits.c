/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: starting point
 * @m: target point
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int nor;

	nor = n ^ m;

	while (nor)
	{
		bits += nor & 1;
		nor >>= 1;
	}

	return (bits);
}
