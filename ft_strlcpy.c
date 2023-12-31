/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:11:11 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:41:39 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = 0;
	if (dstsize == 0)
		return (i);
	while (src[j] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int main (void)
// {
// 	char s[] = "AAAAAAAAA";
// 	char d[] = "";
// 	char *ss = malloc(10);
// 	for(int i = 0; i < 9; i++){
// 		ss[i] = 'A';
// 	}
// 	char *dd = malloc(20);
// 	size_t dstsize = 5;

// 	printf("%zu\n", ft_strlcpy(d,s,dstsize));
// 	printf("%s\n", d);
// 	printf("%zu\n", strlcpy(dd,ss,dstsize));
// 	printf("%s\n", d);
// }