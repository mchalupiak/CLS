#include <stdio.h>

/* Exercise 1-12. Write a program to print a
histogram of the lengths of words in its
input. It is easy to draw the histogram
with the bars horizontal; a vertical
orientation is more challenging. */

int main()
{
	int character;
	int character_counts[26];
	while ((character = getchar()) != EOF)
	{
		int word_length = 0;
		while (character != ' ' && character != '\t' && character != '\n')
		{
			word_length++;
		}
		character_counts[word_length]++;
	}
	printf("horizontal or vertical (h or v):\n");
	while ((character = getchar()) != 'h' || (character = getchar()) != 'v')
		character = getchar();

	if (character == 'v')
	{
		printf("number of letters per word\n");
		for (int i = 1; i < 27; i++)
		{
			if (character_counts[i] > 0)
				printf("%d  ", i);
		}
		printf("\n");
		for (int i = 1; i < 27; i++ )
		{
			if (character_counts[i] >= i)
			{
				if (i < 10)
					printf("#  ");
				else
					printf("##  ");
			}
		}
	}
}