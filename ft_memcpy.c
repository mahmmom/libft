/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:25:50 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/05 18:33:28 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*q;

	i = 0;
	p = (char *)src;
	q = (char *)dest;
	while (i < n)
	{
		p[i] = q[i];
		i++;
	}
	return (q);
}

int	main(void)
{
	char src[] = "AAAA";
	char dst[] = "zz";

	char src1[] = "AAAA";
	char dst1[] = "zz";

	printf("source before: %s\n", src);
	printf("dst before: %s\n", dst);
	
	printf("-------------------------\n");

	memcpy(dst, src, 3);

	printf("source after: %s\n", src);
	printf("dst after: %s\n", dst);
	
	printf("=========================\n");
	printf("=========================\n");
	
	printf("MY source before: %s\n", src1);
	printf("MY dst before: %s\n", dst1);
	
	printf("-------------------------\n");
	
	ft_memcpy(dst1, src1, 3);

	printf("MY source after: %s\n", src1);
	printf("MY dst after: %s\n", dst1);
	
}