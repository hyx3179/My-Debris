#include <stdio.h>
 int main()
{
    int x, y, z, t;
    printf("\n请输入三个数字:\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x >= y)
	{
	    if (x >= z)
		{
		    t = x;
		}
	}
    if (y >= x)
	{
	    if (y >= z)
		{
		    t = y;
		}
	}
    if (z >= x)
	{
	    if (z >= y)
		{
		    t = z;
		}
	}
    printf("最大值为：%d\n", t);
     return 0;
}


