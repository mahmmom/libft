/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:06:55 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 20:55:12 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*q;
	size_t			i;

	p = (unsigned char *) s1;
	q = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (p[i] != q[i])
			return (p[i] - q[i]);
		i++;
	}
	return (0);
}

// int main (void)
// {
//     char s1[] = "";
//     char s2[] = "";

//     printf("Before comparing: \n");
//     printf("%s\n%s\n", s1, s2);

// 	printf("After comparing Original: %d\n", memcmp(s1, s2, 2));
//     printf("After comparing Mine: %d\n", ft_memcmp(s1, s2,2));
// }