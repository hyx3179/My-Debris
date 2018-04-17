#include <stdio.h>

int main()
{
    int x, y;
    printf("\n请输入三个数字:\n");
    scanf("%d", &x);
    y = -1;
    if (x != 0)
	{
	    if (x > 0)
		y = 1;
	}
    else
	y = 0;
    printf("最大值为：%d\n", y);

    return 0;
}
