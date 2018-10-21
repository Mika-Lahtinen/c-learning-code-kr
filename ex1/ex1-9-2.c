#include <stdio.h>

//定义一个非空格变量
#define NONBLANK 'a'

//多空格合并为一个输出
//R&K版第一个答案
int main()
{
	int c, lastc;
	lastc = NONBLANK;

	while((c = getchar()) != EOF)
	{
			if (c != ' ')
				putchar(c);
			if (c == ' ')
				if (lastc != ' ')
						putchar(c);
			lastc = c;
	}

}
