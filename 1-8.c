#include <stdio.h>

int main()
{
	int c, bc, nlc, tc;
	bc = 0, nlc = 0, tc = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			bc++;
		if (c == '\n')
			nlc++;
		if (c == '\t')
			tc++;
	}
	printf("\nblanks: %d; newlines: %d; tabs: %d\n", bc, nlc, tc);
}