#include "main.h"

/**
 * string_toupper - changes all lowercase strings to uppercase
 * @s: input lowercase string
 * Return: the pointer to destination with uppercase result
 */

char *string_toupper(char *s)
{
  int i = 0;

  while (*(s + i) != '\0')
    {
      if ((*(s + i) >= 97) && (*(s + i) <= 122))
	  *(s + i) = *(s + i) -32;
      i++;
    }
  return (s);
}
	  
	 
