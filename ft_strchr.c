/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:22:36 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 22:25:54 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	car;
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	car = (char)c;
	while (str[i])
	{
		if (str[i] == car)
			return (&str[i]);
		i++;
	}
	if (car == '\0')
		return (&str[i]);
	return (0);
}

/*int main (void)
{
	const char s[] = "tripouille";
	// int c = 't';
	
	printf("%s\n", ft_strchr(s, 't' + 256));
	printf("%s\n", strchr(s, 't' + 256));
}*/