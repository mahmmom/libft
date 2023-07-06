/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:48:18 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/06 18:12:13 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] != '\0' && needle[j] == haystack[i + j])
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
		
	}
	return (NULL);
}

int main(void)
{
    const char haystack[] = "world! world!";
    const char needle[] = "ld";
    size_t len = 5;

    char *result = strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Needle found at position: %p\n", result);
    else
        printf("Needle not found.\n");
		
	char *ft_result = ft_strnstr(haystack, needle, len);
	
	if (ft_result != NULL)
		printf("Needle found at position: %p\n", ft_result);
	else
        printf("Needle not found.\n");

    return 0;
}