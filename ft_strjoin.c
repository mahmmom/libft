#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char *ft_strjoin(const char* s1, const char* s2)
{
    size_t lens1 = strlen(s1);
    size_t lens2 = strlen(s2);

    //plus 1 for \0
    char *result = malloc(sizeof(char) * (lens1 + lens2 + 1));

    if (!result)
        return (NULL);
   else
    {
        memcpy(result, s1, lens1);
        memcpy(result+lens1, s2, lens2+1);
    }

    //do not forget to call free when do not need it anymore
    return result;
}

int main()
{
    char str[] = "My name ";
    char str2[] = "is Mohamed";
    
    char* dest = ft_strjoin(str, str2);
    
    printf("The substring: %s\n", dest);
    
    free(dest);

    return 0;
}
