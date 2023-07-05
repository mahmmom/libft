/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:46:08 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/05 18:46:50 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	i = 0;
	p = (char *)src;
	q = (char *)dest;
	if (s) {
	
	}
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (q);
}

int	main(void)
{
	char src[] = "AAA";
	char dst[] = "zz";

	printf("source before: %s\n", src);
	printf("dst before: %s\n", dst);
	
	printf("-------------------------\n");

	memmove(dst, src, 3);

	printf("source after: %s\n", src);
	printf("dst after: %s\n", dst);
	
	printf("=========================\n");
	printf("=========================\n");
	
	printf("MY source before: %s\n", src);
	printf("MY dst before: %s\n", dst);
	
	printf("-------------------------\n");
	
	ft_memmove(dst, src, 2);

	printf("MY source after: %s\n", src);
	printf("MY dst after: %s\n", dst);
}