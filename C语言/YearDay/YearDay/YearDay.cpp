//-----------------------
//YearDay.cpp
//功能：根据输入的人年月日判断是那一年的第几天
//-----------------------
#include <stdio.h>
int leap(int a)
{
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		return 1;
	else
		return 0;
}
int number(int year, int m, int d)
{
	int sum = 0, i, j;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int b[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (leap(year) == 1)
	{
		for (i = 0;i < m - 1;i++)
			sum += b[i];
	}
	else
		for (i = 0;i < m - 1;i++)
			sum += a[i];
	sum += d;
	return sum;
}
void main()
{
	int year, mouth, day, n;
	printf("请输入年月日\n");
	scanf("%d%d%d", &year, &mouth, &day);
	n = number(year, mouth, day);
	printf("第%d天\n", n);
}