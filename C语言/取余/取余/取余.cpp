//-----------------
//ȡ��.cpp
//���ܣ�ȡx^y�������λ
//-----------------
#include <stdio.h>
int main()
{
	int i, x, y,z=1;
	printf("������x��y(x^y)��");
	scanf("%d%d", &x, &y);
	for (i = y;i > 0;i--)
		z = z* x % 1000;    //��ֹ���������������,����ÿ�γ���֮��ȡ�����λ
	if (z >= 100)
	{
		printf("%d^%d�������λ�ǣ�%d\n", x, y, z);
	}
	else
	{
		printf("%d^%d�������λ�ǣ�0%d\n", x, y, z);
	}
	return 0;
}