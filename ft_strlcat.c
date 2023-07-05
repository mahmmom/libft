/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:32:54 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 17:43:08 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	
}

#include <string.h>
int main (void)
{
	const char s[] = "Mohamed";
	char d[] = "HHH";
	size_t size = 5;

	printf("%zu\n", ft_strlcat(d,s,size));
	printf("%s\n", d);
	
	printf("%zu\n", strlcat(d,s,size));
	printf("%s\n", d);
}