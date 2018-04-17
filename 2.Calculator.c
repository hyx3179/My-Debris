#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, n3;
    char o;
    printf("输入运算式(以空格分割): ");

    // 通过 scanf() 函数接收用户输入的运算式
    scanf("%lf %s %lf", &n1, &o, &n2);
    if (o == '+')
	{
	    n3 = n1 + n2;
	}
    if (o == '-')
	{
	    n3 = n1 - n2;
	}
    if (o == '*')
	{
	    n3 = n1 * n2;
	}
    if (o == '/')
	{
	    n3 = n1 / n2;
	}
    if (o == '^')
	{
	    n3 = pow(n1, n2);
	}
    // 输出结果
    printf("%.2lf %c %.2lf = %.2lf \n", n1, o, n2, n3);

    return 0;
}
