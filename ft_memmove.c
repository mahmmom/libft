/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:46:08 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 20:56:53 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*ft_dest;

	temp = (char *)src;
	ft_dest = (char *)dest;
	if (temp < ft_dest)
	{
		while (n--)
		{
			ft_dest[n] = temp[n];
		}
	}
	else
	{
		ft_memcpy(ft_dest, temp, n);
	}
	return (dest);
}

/*int main() {
    char source[] = "A BC D EFGHIJ";

    char *org = memcpy(source+2, source, sizeof(char) * 5);

    printf("String: %s\n", org);
	
	char source2[] = "A BC D EFGHIJ";

	char *mine = ft_memmove(source2+2, source2, sizeof(char) * 5);

    printf("String: %s\n", mine);

    return 0;
}*/