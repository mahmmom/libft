/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:21:29 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:19:57 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dest = (char *)s;
	if (!s)
		return (0);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
			dest[j++] = s[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
	char str[] = "Mad Dog";

	char *substring = ft_substr(str, 4, 3);

	printf("The substring: %s\n", substring);
	
	return (0);
}*/