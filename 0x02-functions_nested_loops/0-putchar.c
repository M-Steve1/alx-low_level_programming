#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _putchar - prints the character word to stdout
 * @param word - the character to print 
 * 
 * main - Entry point
 * Returns 0 (Success)
 */

void _putchar()
{

  char word[9] = "_putchar";
  int word_length = strlen(word);
  int i;

  for(i = 0; i < word_length; i++)
    {
      putchar(word[i]);
    }

  putchar('\n');
}
int main()
{
  _putchar();

  return 0;
}
