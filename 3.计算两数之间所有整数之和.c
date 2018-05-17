#include <stdio.h>

int main ()
{
	int n1, n2, n3 = 0, t;
	printf ("计算两数之间所有整数之和\n请输入两个整数（最大不要超过65536）：\n");
	scanf ("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		t = n1;
		n1 = n2;
		n2 = t;					//交换n2为较大数
	}
	for (t = n1; t <= n2; t = t + 1)
	{
		n3 += t;
	}
	printf ("%d 到%d 之间所有整数之和为 %d\n", n1, n2, n3);
	return 0;
}
