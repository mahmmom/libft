/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:48:18 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 20:11:30 by mohamoha         ###   ########.fr       */
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
		while (needle[j] != '\0' && haystack[i] != '\0' && needle[j] == haystack[i])
		{
			j++;
			i++;
		}

		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
	i++;
	}
	return (NULL);
}

int main(void)
{
    const char haystack[] = "Hello, world!";
    const char needle[] = "world";
    size_t len = strlen(haystack);

    char *result = strnstr(haystack, needle, len);

    if (result != NULL)
        printf("Needle found at position: %ld\n", result - haystack);
    else
        printf("Needle not found.\n");
		
	char *ft_result = ft_strnstr(haystack, needle, len);
	
	if (ft_result != NULL)
		printf("Needle found at position: %ld\n", ft_result - haystack);
	else
        printf("Needle not found.\n");

    return 0;
}
