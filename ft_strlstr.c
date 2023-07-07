#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

size_t    ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    while (i < dstsize && dst[i])
    {
        i++;
    }
    while ((i + j + 1) < dstsize && src[j])
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i != dstsize)
    {
        dst[i + j] = '\0';
    }
    return (i + strlen(src));
}

int main(void)
{
    char dest[20] = "Hello";
    const char src[] = " World!";
    unsigned int size = sizeof(dest);

    printf("Initial dest: %s\n", dest);
    printf("strlcat return value: %u\n", ft_strlcat(dest, src, size));
    printf("Concatenated dest: %s\n", dest);

    return 0;
}