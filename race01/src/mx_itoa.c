#include "header.h"

char *mx_itoa(long long number) 
{
    int length = 0;
    long long num_copy = number;
    if (num_copy <= 0) 
    {
        length++;
    }
    while (num_copy != 0) 
    {
        num_copy /= 10;
        length++;
    }

    char *num_str = mx_strnew(length);
    if (num_str == NULL) 
    {
        return NULL; 
    }

    if (number == 0) 
    {
        num_str[0] = '0';
    } else if (number < 0) 
    {
        num_str[0] = '-';
        number *= -1;
    }
    num_str[length--] = '\0';
    while (number != 0 && length >= 0 && num_str[length] != '-') 
    {
        num_str[length--] = (number % 10) + '0';
        number /= 10;
    }
    return num_str;
}

