#include <stdio.h>

int main()
{
    int n3 = 51, t = 2018;
    do
	{
	    n3 = n3 * 1.1;
	    t++;

	}
    while (n3 < 300);
    printf("%d\n", t);
    printf("%d\n", n3);
    return 0;
}
