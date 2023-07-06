#include "libft.h"
char *ft_strdup(const char *s)
{
   char *duplic;
   int  i;
  
   i = 0;
   if (!(duplic = (char *)malloc(sizeof(char) * strlen(s) + 1)))
   return(NULL);
   while (*s)
       duplic[i++] = *s++;
    duplic[i] = '\0';
    return(duplic);
}

int main() 
{
    const char str[] = "Hello, world!";
    
    char *org = strdup(str);
    char *mine = ft_strdup(str);
    
    printf("The copied string is: %s\n", org);
    printf("The copied string is: %s\n", mine);
    
    
    return 0;
}
