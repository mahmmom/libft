/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:23:52 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:08:25 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*j;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			j = (char *)&s[i];
			return (j);
		}
		i--;
	}
	if (c == '\0')
	{
		j = (char *)&s[i];
		return (j);
	}
	return (NULL);
}

/*int main (void)
{
	const char s[] = "Luaaalas";
	int c = 'l';
	
	printf("%p\n", ft_strrchr(s, c));
	printf("%p\n", strrchr(s, c));
}*/