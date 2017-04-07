//----------------------
//FindTure.cpp
//功能：通过穷举法判断说话真假
//----------------------
#include <stdio.h>
void main()
{
	int a, b, c;//以a,b,c表示新郎
	for (a = 1;a <= 3;a++)
		for (b = 1;b <= 3;b++)
			for (c = 1;c <= 3;c++)//以1，2，3表示新娘
				if (a != 1 && c != 1 && c != 3 && a != b&&b != c&&c != a)//隐含条件：a，b，c不能有相同的妻子
				{
					printf("%c将嫁给A\n", 'X' + a - 1);
					printf("%c将嫁给B\n", 'X' + b - 1);
					printf("%c将嫁给C\n", 'X' + c - 1);
				}
}