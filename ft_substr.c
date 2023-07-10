#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    j;
    char    *substring;

    substring = (char*)malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (i >= start && j < len)
        {
            substring[j] = s[i];
            j++;
        }
        i++;
    }
    substring[j] = 0;
    return (substring);
}

int main()
{
    char str[] = "My name is Methus";
    
    char* dest = ft_substr(str, 8, 2);
    
    printf("The substring: %s\n", dest);

    return 0;
}
