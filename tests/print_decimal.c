#include "main.h"

int print_decimal(int value){
    int count = 0;

    /* Print a  '-' for negative numbers */
    if (value < 0)
    {
        count += _putchar('-');
        value = value * - 1;
    }

    /* First remove the last digit of number and print the remaining digits using recursion
    , then print the last digit. */

    if(value > 0)
    {
        count += print_decimal(value / 10); 
        count += _putchar(value % 10 + '0');
    }

    return (count);
}