#include <stdio.h>

int main ()
{
	double n3 = 0.1, t;
	for (t = 0.1; t < 10; t = t + 0.17)
	{
		n3 *= t;
		printf ("%f\n", n3);
	}
	return 0;
}
