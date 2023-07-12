#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void ft_strrev(char* str, int length) {
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* ft_itoa(int num) {
    int i = 0;
    int Neg = 0;
    int base = 10;

    // Handle negative numbers
    if (num < 0 && base == 10) {
        Neg = 1;
        num = -num;
    }

    // Calculate the length of the string
    int length = 1;
    int temp = num;
    while (temp /= base)
        length++;

    // Allocate memory for the string
    char* str = (char*)malloc((length + Neg + 1) * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    // Process individual digits
    while (num != 0) {
        int remainder = num % base;
        str[i++] = (remainder > 9) ? (remainder - 10) + 'a' : remainder + '0';
        num = num / base;
    }

    // Append negative sign if necessary
    if (Neg)
        str[i++] = '-';

    // Reverse the string
    ft_reverse(str, i);

    // Add null terminator
    str[i] = '\0';

    return str;
}


int main()
{
    int number = -144554;
    printf("Number =  %s\n", ft_itoa(number));

    return (0);
}
