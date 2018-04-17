#include <stdio.h>

int main()
{
    int x, y, z, t;
    printf("请输入三个数字:\n");
    scanf("%d%d%d", &x, &y, &z);
    t = x;
    if (t < y)
	t = y;
    if (t < z)
	t = z;
    printf("最大值为：%d\n", t);
    return 0;
}
