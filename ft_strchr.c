/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:22:36 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/06 18:40:09 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int	i;
	char	*j;
	
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = (char *)&s[i];
			return (j);
		}
	i++;
	}
	return (NULL);
}


int main (void)
{
	const char s[] = "Luda";
	int c = 'd';
	
	printf("%c\n", *ft_strchr(s, c));
	//printf("%d\n", *strchr(s, c));
}