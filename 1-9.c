#include <stdio.h>

int main()
{
	int c;
	int space_count = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
			space_count == 0;
		
		if (space_count == 0 && c == ' ')
		{
			space_count++;
			putchar(' ');
		}
	}
}
