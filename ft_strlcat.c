/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:32:54 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:05:46 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	counter;

	dst_len = 0;
	counter = 0;
	while (dst_len < dstsize && dst[dst_len])
	{
		dst_len++;
	}
	while ((dst_len + counter + 1) < dstsize && src[counter])
	{
		dst[dst_len + counter] = src[counter];
		counter++;
	}
	if (dst_len != dstsize)
	{
		dst[dst_len + counter] = '\0';
	}
	return (dst_len + ft_strlen(src));
}

/*int main(void)
{
    char dest[20] = "Hello";
    const char src[] = " World!";
    unsigned int size = sizeof(dest);

    printf("Initial dest: %s\n", dest);
    printf("strlcat return value: %u\n", ft_strlcat(dest, src, size));
    printf("Concatenated dest: %s\n", dest);

    return 0;
}*/