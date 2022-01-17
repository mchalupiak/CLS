#include <stdio.h>

/* Exercise 1-13. Write a program to print a
histogram of the lengths of words in its
input. It is easy to draw the histogram
with the bars horizontal; a vertical
orientation is more challenging. */

#define MAX_WORD_LEN 26

int main()
{
	int character, word_length;
	int character_counts[MAX_WORD_LEN];
	printf("");

	for (int i = 0; i < MAX_WORD_LEN; i++)
	{
		character_counts[i] = 0;
	}

	while ((character = getchar()) != EOF)
	{

		if (character != ' ' && character != '\t'&& character != '\n')
		{
			word_length++;
		}
		else
		{
			character_counts[word_length]++;
			word_length = 0;
		}
	}

	printf("vertical");
	printf("number of letters per word\n");
	for (int i = 1; i < 26; i++)
	{
		if (character_counts[i] > 0)
			printf("%d  ", i);
	}
	printf("\n");
	for (int i = 1; i < 26; i++ )
	{
		for (int j = 1; j < 26; j++)
		{
				if (character_counts[j] >= i)
			{
				if (j < 10)
					printf("#  ");
				else
					printf("##  ");
			}
		}
		putchar('\n');
	}

	printf("horizontal\n");
	for (int i = 1; i < 26; i++)
	{
	    if (character_counts[i] > 0)
	    {
	        if (i < 10)
	            printf("%d  ", i);
	        else
	            printf("%d ", i);
	    }
	    for (int j = 1; j <= character_counts[i]; j++)
	    {
	        printf("#");
	    }
	    if (character_counts[i] > 0)
	        printf("\n");
	}
}
