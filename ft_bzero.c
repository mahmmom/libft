/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:12:13 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 18:24:57 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

#include <string.h>
int	main(void)
{
	char	s[] = "Mohamed";

	size_t n = 3;

	bzero(s, n);
	
	printf("Original bzero: %s\n", s);
	
	ft_bzero(s, n);
	
	printf("My bzero: %s\n", s);
}