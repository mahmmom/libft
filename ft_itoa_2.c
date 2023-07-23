#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_itoa(int nbr)
{
    int len;
    long n_tmp;
    char *str;

    if (nbr == -2147483648)
        return strdup("-2147483648");

    len = 0;
    n_tmp = nbr;

    while (n_tmp)
    {
        n_tmp /= 10;
        len += 1;
    }

    if (nbr < 0 || (nbr == 0 && (1.0 / nbr) < 0))
    {
        len += 1;
        n_tmp = -nbr; // Store the positive value for conversion
    }
    else
    {
        n_tmp = nbr;
    }

    str = (char *)malloc(sizeof(char) * (len + 1)); // Allocate enough memory for the string
    if (str == NULL)
        return NULL;

    str[len] = '\0'; // Add the null terminator at the end of the string

    while (len--)
    {
        str[len] = (n_tmp % 10) + '0'; // Convert each digit to character
        n_tmp /= 10;
    }

    if (nbr < 0 || (nbr == 0 && (1.0 / nbr) < 0))
        str[0] = '-'; // Place the negative sign at the beginning of the string

    return str;
}

int main()
{
    int number = -0;
    char *result = ft_itoa(number);
    if (result != NULL)
    {
        printf("Number: %d\nString: %s\n", number, result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
