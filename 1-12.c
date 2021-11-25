#include <stdio.h>


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