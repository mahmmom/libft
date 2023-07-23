/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:25:50 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 20:55:41 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ft_src;
	char	*ft_dest;

	i = 0;
	if (!dest && !src)
		return (NULL);
	ft_src = (char *)src;
	ft_dest = (char *)dest;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    char source[] = "I love 42";
    char destination[20];

    memmove(destination+2, source, strlen(source) + 1);

    printf("String: %s\n", source);
    printf("destination: %s\n", destination);

	ft_memmove(destination+2, source, strlen(source + 1));

    printf("String: %s\n", source);
    printf("destination: %s\n", destination);

    return 0;
}*/