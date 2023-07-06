#include "libft.h"

void *ft_calloc(size_t nelem, size_t elsize)
{
    void *ptr = malloc(nelem * elsize);
    
    if (ptr != NULL)
        ft_memset(ptr, 0, nelem * elsize);
    return (ptr);
    
    //return ft_memset(malloc(nelem * elsize), 0, nelem * elsize);
}

int main()
{
    int numEl = 0;
    int elSize = sizeof(int);
    
    // Allocate memory for an array of 5 integers and initialize to zero
    int* str = (int*)ft_calloc(numEl, elSize);
    
    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    printf("Array elements after calloc:\n");
    int i = 0;
while (i < numEl)
{
    printf("%d\n", str[i]);
    i++;
}

i = 0;
while (i < numEl)
{
    str[i] = i + 1;
    i++;
}

printf("Array elements after modification:\n");
i = 0;
while (i < numEl)
{
    printf("%d\n", str[i]);
    i++;
}
    free(str);
    
    return 0;
}
