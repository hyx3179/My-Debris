#include <stdio.h>

int main ()
{
	int n1, n2, n3, t;
	printf ("输出两数之间所有素数\n请输入两个整数：\n");
	scanf ("%d %d", &n1, &n2);
	if (n1 > n2)
	{
		t = n1;
		n1 = n2;
		n2 = t;					//交换n2为较大数
	}
	for (n3 = n1; n3 <= n2; n3 = n3 + 1)	//n3遍历两数之间的所有整数
	{
		for (t = 2; t <= n3; t = t + 1)	//n3是否可被2到n3之间的整数整除
		{
			if (n3 % t == 0)
			{
				break;
			}
		}
		if (t == n3)			//n3只可被本身和1整除，输出n3
		{
			printf ("%d;", n3);
		}
	}
	printf ("\n");
	return 0;
}
