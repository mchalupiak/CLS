#include <stdio.h>

/* Exercise 1-9. Write a program to copy its
input to its output, replacing each string 
of one or more blanks by a single blank. */

int main()
{
	int character;
	int space_count = 0;
	while ((character = getchar()) != EOF)
	{
		if (character != ' ' && character != '\t')
		{
			putchar(character);
			space_count = 0;
		}
		
		if (space_count == 0 && (character == ' ' || character == '\t'))
		{
			putchar(' ');
			space_count++;
		}
	}
}
