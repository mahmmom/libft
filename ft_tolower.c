/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:29:45 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:38:55 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

// #include<stdio.h>
// int main (void)
// {
// 	int	c;

// 	c = 'a';
// 	printf("%c\n", ft_tolower(c));
// }