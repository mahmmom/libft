/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:23:07 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 10:11:56 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

/*int main (void)
{
    char s1[] = "AAAA";
    char s2[] = "AAAAA";

    printf("Before comparing: \n");
    printf("%s\n%s\n", s1, s2);
    
    printf("After comparing: %d\n", ft_strncmp(s1, s2, 5));
}*/