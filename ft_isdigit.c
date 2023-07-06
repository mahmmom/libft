/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 12:02:50 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/06 20:47:31 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	return (1);
	else
	return (0);
}

#include<stdio.h>
int main (void)
{
	int c;
	
	c = '0';

	printf("%d\n", ft_isdigit(c));
}