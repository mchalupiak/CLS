#include <stdio.h>

/* Exercise 1-10. Write a program to copy
its input to its ouput, replacing each tab
by \t, each backspace by \b, and each
backslash by \\. This makes tabs and 
backspaces visible in an unambiguous
way. */

int main()
{
	int character;

	while ((character = getchar()) != EOF)
	{
		if (character == '\t')
		{
			putchar('\\');
			putchar('t');
		}

		if (character == '\b')
		{
			putchar('\\');
			putchar('b');
		}

		if (character == '\\')
		{
			putchar('\\');
			putchar('\\');
		}

		else
		{
			putchar(character);
		}
	}
}