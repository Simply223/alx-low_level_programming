#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: pointer to destination.
 */

char *leet(char *s)
{
  int i =0, j;
  int low_letters[] = {97, 101, 111, 116, 108};
  int upper_letters[] = {65, 69, 79, 84, 76};
  int numbers[] = {52, 51, 48, 55, 49};

  while (*(s + i) != '\0')
    {
      for (j = 0; j < 5; j++)
	{
	  if (*(s + i) == low_letters[j] || *(s + i) == upper_letters[j])
	    {
	      *(s + i) = numbers[j];
	      break;
	    }
	}
      i++;
    }

  return (s);
}
