/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:14:22 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/03 14:19:21 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9'))
	return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
	else
	return (0);
}

#include<stdio.h>
int main (void)
{
	int c;
	int	b;
	int	g;
	
	c = '5';
	b = 'x';
	g = '?';

	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(g));
}