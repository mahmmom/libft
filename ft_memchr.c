/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 18:20:34 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:41:10 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *) &p[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "Mohamed";
// 	int x = 'e';

// 	size_t n = strlen(str);

// 	char *p = memchr(str, x, n);

// 	printf("'%c' location is : %ld\n", x, p - str);

// 	printf("=========================\n");
// 	printf("=========================\n");

// 	char str1[] = "Mohamed";
// 	int x1 = 'e';

// 	size_t n1 = strlen(str1);
// 	char *q = memchr(str1, x1, n1);

// 	printf("'%c' location is : %ld\n", x1, q - str1);
// }