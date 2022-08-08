# The ALX Holberton Software Enginering printf Function Team Project

This is a printf function project built by Wandile Mawelela and Matlotlo Makomane for the ALX Holberton Software Engineering programme.
## NAME
printf

## SYNOPSIS
```sh
#include “main.h”

int _printf(const char *format, ...)
```

## DESCRIPTION
The function _printf() produces output according to the format as described below. It writes output to stdout, the standard output stream. The _printf function writes the output under the control of a format string that specifies how subsequent arguments are converted for output. 

### Format of the format string
The format string is a character string, beginning and ending in its initial shift state, if any. The format string is composed of zero or more directives: ordinary characters (not %), which are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification is introduced by the character %, and ends with a conversion specifier. The overall syntax of a conversion specification is: 
```sh
%conversion
```

The arguments must correspond properly (after type promotion) with the conversion specifier.  By default, the arguments are used in the order given and each conversion specifier asks for the next argument (and it is an error if insufficiently many arguments are given).

### Conversion specifiers
A character that specifies the type of conversion to be applied. The conversion specifiers and their meanings are:
| Character | Type of conversion  |
| ------ | ------ |
| d, i | The int argument is converted to signed decimal notation. |
| o, u, x, X | The unsigned int argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x and X) notation.  The letters abcdef are used for x conversions; the letters ABCDEF are used for X conversions. |
| c | If no l modifier is present, the int argument is converted to an unsigned char, and the resulting character is written. |
| s | If no l modifier is present: the const char * argument is expected to be a pointer to an array of character type (pointer to a string).  Characters from the array are written up to (but not including) a terminating null byte ('\0'). |
| p | The void * pointer argument is printed in hexadecimal (as if by %#x or %#lx). |
| % | A '%' is written.  No argument is converted.  The complete conversion specification is '%%'. |

## RETURN VALUE
Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

## BUGS


## EXAMPLES
```sh
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
alex@ubuntu:~/c/printf$
```

## GETTING STARTED
These instructions will get you a copy of the project up and running on your local machine (Linux distro) for development and testing purposes. You will need to clone the following repository of the project from Github. This will contain the _printf function and all of its dependencies.
```sh
git clone https://github.com/wandilemawelela/printf.git
```

## AUTHORS - COHORT 8
Wandile Mawelela and Matlotlo Makomane.
