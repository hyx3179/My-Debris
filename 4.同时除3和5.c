#include <stdio.h>
 int main () 
{
	int n1;
	printf ("输入一个整数：\n");
	scanf ("%d", &n1);
	if (n1 % 3 == 0)
		
	{
		if (n1 % 5 == 0)
			
		{
			printf ("%d 可以同时被3和5整除\n", n1);
			return 0;
		}
	 }
	printf ("%d 不可以同时被3和5整除\n", n1);
	return 0;
}
