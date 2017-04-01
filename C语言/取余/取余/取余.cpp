//-----------------
//取余.cpp
//功能：取x^y的最后三位
//-----------------
#include <stdio.h>
int main()
{
	int i, x, y,z=1;
	printf("请输入x和y(x^y)：");
	scanf("%d%d", &x, &y);
	for (i = y;i > 0;i--)
		z = z* x % 1000;    //防止出现数据溢出问题,所以每次乘完之后取最后三位
	if (z >= 100)
	{
		printf("%d^%d的最后三位是：%d\n", x, y, z);
	}
	else
	{
		printf("%d^%d的最后三位是：0%d\n", x, y, z);
	}
	return 0;
}