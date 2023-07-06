#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char *duplic;
    int i;
  
    i = 0;
    duplic = (char *)malloc(sizeof(char) * (strlen(s) + 1));
    if (duplic == NULL)
       return NULL;
    while (*s)
        duplic[i++] = *s++;
    duplic[i] = '\0';
    return duplic;
}

int main() 
{
    const char str[] = "Hello, world!";
    
    char *org = strdup(str);
    char *mine = ft_strdup(str);
    
    printf("The copied string is: %s\n", org);
    printf("The copied string is: %s\n", mine);
    
    free(org);
    free(mine);
    
    return 0;
}
