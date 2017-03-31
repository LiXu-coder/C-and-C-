#include<stdio.h>
int main()
{
	int i, j=1;
	for (i = 9;i > 0;i--)
	{
		j = (j + 1) * 2;
	}
	printf("The total is %d\n", j);
}