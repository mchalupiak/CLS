#include <stdio.h>

/* Exercise 1-8. Write a program to count 
blanks, tabs, and newlines. */

int main()
{
	int character, backspace_count, newline_count, tab_count;
	backspace_count = 0, newline_count = 0, tab_count = 0;
	while ((character = getchar()) != EOF)
	{
		if (character == ' ')
			backspace_count++;
		if (character == '\n')
			newline_count++;
		if (character == '\t')
			tab_count++;
	}
	printf("\nblanks: %d; newlines: %d; tabs: %d\n", backspace_count, newline_count, tab_count);
}