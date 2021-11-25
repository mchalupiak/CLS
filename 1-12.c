#include <stdio.h>

/* Exercise 1-12. Write a program that
prints its input one word per line. */

int main()
{
	int c, count = 0;

	while ((c = getchar()) != EOF)
	{
		if ((c == ' ' || c == '\t') && count == 0)
		{
			putchar('\n');
			count++;
		}
		else if (c != ' ' && c != '\t')
		{
			putchar(c);
			count = 0;
		}
	}
}