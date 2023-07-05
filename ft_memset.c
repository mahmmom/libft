/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:43:28 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 18:24:02 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

#include <string.h>
int	main(void)
{
	char	s[] = "Mohamed";
	
	int	c = '%';
	
	size_t len = 4;

	printf("Original Memset: %s\n", memset(s, c, len));
	
	ft_memset(s, c, len);
	
	printf("My Memset: %s\n", s);
}