/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:34:54 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:00:39 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplic;
	int		i;

	i = 0;
	duplic = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (duplic == NULL)
		return (NULL);
	while (*s)
		duplic[i++] = *s++;
	duplic[i] = '\0';
	return (duplic);
}

// int main() 
// {
//     const char str[] = "Hello, world!";
//     char *org = strdup(str);
//     char *mine = ft_strdup(str);

//     printf("The copied string is: %s\n", org);
//     printf("The copied string is: %s\n", mine);
//     free(org);
//     free(mine);
//     return 0;
// }
