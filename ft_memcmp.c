/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:06:55 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/05 20:43:20 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p = (unsigned char *) s1;
	unsigned char *q =  (unsigned char *) s2;
	size_t	i;

	i = 0;
	while ((p[i] || q[i]) && i < n)
	{
		if (p[i] != q[i])
			return (p[i] - q[i]);
	i++;
	}
	return (0);
}

int main (void)
{
    char s1[] = "";
    char s2[] = "";

    printf("Before comparing: \n");
    printf("%s\n%s\n", s1, s2);

	printf("After comparing Original: %d\n", memcmp(s1, s2, 5));
    
    printf("After comparing Mine: %d\n", ft_memcmp(s1, s2, 5));
}