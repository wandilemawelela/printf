#include "main.h"

/**
  * print_string - Loops a string until it is empty
  * @str: String to be looped
  * Return: String
  */

int print_string(char *str)
{
	int count = 0, i;

	/* Looping the string until it is empty. ie till it reaches \0*/
	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
