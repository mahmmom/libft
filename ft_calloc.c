/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:44:44 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 20:44:54 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem != 0 && elsize != 0 && nelem > INT_MAX / elsize)
		return (NULL);
	ptr = malloc(nelem * elsize);
	if (ptr != NULL)
		ft_memset(ptr, 0, nelem * elsize);
	return (ptr);
}

/*int main()
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
*/