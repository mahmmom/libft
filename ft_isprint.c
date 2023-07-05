/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:42:39 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/03 14:46:55 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  int	ft_isprint(int c)
  {
	if ((c >= 32 && c <= 127))
	return (1);
	else
	return (0);
  }

#include<stdio.h>
int main (void)
{
	int c;
	int	b;
	
	c = 48;
	b = 22;

	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(b));
}