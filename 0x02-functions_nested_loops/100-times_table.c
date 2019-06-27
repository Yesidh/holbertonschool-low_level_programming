#include "holberton.h"
/**
 * times_table -print the tables starting with 0 ending in 9
 *
 *
 * Return: nothing
 */
void print_times_table(int n)
{
  int i = 0, j = 0, mul,sd;

  if((n >= 0) && (n <= 15))
    { 
      while (i <= n)
	{
	  while (j <= n)
	    {
	      mul = i * j;
	      _putchar((mul / 100) + '0');
	      sd = mul % 100;
	      if (sd > 9)
		{
		  _putchar(' ');
		  _putchar((sd / 10) + '0');
		  _putchar((sd % 10) + '0');
		}
	      else
		{
		  if (j >= 1)
		    {
		      _putchar(' ');
		      _putchar(' ');
		      _putchar(sd + '0');
		    }
		  else
		    _putchar(sd + '0');
		}
	      if (j < n)
		_putchar(',');
	      j++;
	    }
	  _putchar('\n');
	  i++;
	  j = 0;
	}
    }
}
