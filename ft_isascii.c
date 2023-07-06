/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:20:33 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/06 20:48:44 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
	return (1);
	else
	return (0);
}

#include<stdio.h>
int main (void)
{
	int c;
	// int	b;
	// int	g;
	
	c = 55;


	printf("%d\n", ft_isascii(c));
	// printf("%d\n", ft_isascii(b));
	// printf("%d\n", ft_isascii(g));
}