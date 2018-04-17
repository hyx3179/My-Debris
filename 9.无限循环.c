#include <stdio.h>

int main()
{
    double n3 = 51, t = 2018;
    do
	{
	    n3 = n3 * 1.1;
	    t++;

	}
    while (n3 < 300);
    printf("%.0lf\n", t);
    printf("%.f\n", n3);
    return 0;
}
