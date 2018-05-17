#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	clock_t start_t, end_t;
	double total_t;
	start_t = clock ();

	long n1, n2, n3, t;
	char *ptr;
	n1 = strtol (argv[1], &ptr, 10);
	n2 = strtol (argv[2], &ptr, 10);
	if (n1 > n2)
	{
		t = n1;
		n1 = n2;
		n2 = t;					//交换n2为较大数
	}
	for (n3 = n1; n3 <= n2; n3++)	//n3遍历两数之间的所有整数
	{
		for (t = 2; t <= n3; t++)	//n3是否可被2到n3之间的整数整除
		{
			if (n3 % t == 0)
			{
				break;
			}
		}
		if (t == n3)			//n3只可被本身和1整除，输出n3
		{
			printf ("%ld;", n3);
		}
	}
	printf ("\n");

	end_t = clock ();
	printf ("程序启动，start_t = %ld\n", start_t);
	printf ("程序结束，end_t = %ld\n", end_t);
	total_t = (double) (end_t - start_t) / CLOCKS_PER_SEC;
	printf ("CPU 占用的总时间：%f\n", total_t);
	printf ("程序退出...\n");
	return 0;
}
