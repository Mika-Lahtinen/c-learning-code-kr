#include <stdio.h>


int main()
{
	int c, lastc;

	while((c = getchar()) != EOF)
	{
		if (c != ' ')
				putchar(c);
		else if (lastc != ' ')
			putchar(c);
		else 
			continue;
		lastc = c;
	}

}
