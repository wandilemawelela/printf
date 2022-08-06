#include "main.h"

long long int power(int base, int x);
long long convert_to_decimal(int number, int base)
{
    int decimalNumber = 0, i = 0;

    while(number != 0)
    {
        decimalNumber += (number % 10) * power(base, i);
        ++i;
        number / = 10;
    }
    i = 1;

    return (number);
}
