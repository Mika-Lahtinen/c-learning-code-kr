# include <stdio.h>

int main()
{
//定义捕获字符串，定义并初始化空格数、换行符数、制表符数
		int c, nl, nb, nt;
		nl = 0;
		nb = 0;
		nt = 0;

		while((c = getchar()) != EOF)
		{
				if (c == ' ')
						++nb;
				else if (c == '\t')
						++nt;
				else if (c == '\n')
						++nl;
		}

		printf("\nBlank =%2d\nTab =%2d\nLine =%2d\n", nb, nt, nl);
}
