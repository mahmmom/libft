#include <stdio.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    Scounter;
    size_t    Subcounter;
    char    *substring;
    
    if (!s)
		return (0);
    substring = (char*)malloc(sizeof(char) * (len + 1));
    if (!substring)
        return (NULL);
    Scounter = 0;
    Subcounter = 0;
    while (s[Scounter])
    {
        if (Scounter >= start && Subcounter < len)
        {
            substring[Subcounter] = s[Scounter];
            Subcounter++;
        }
        Scounter++;
    }
    substring[Subcounter] = 0;
    return (substring);
}

int main()
{
    char str[] = "My name is Methus";
    
    char* dest = ft_substr(str, 8, 2);
    
    printf("The substring: %s\n", dest);

    return 0;
}
