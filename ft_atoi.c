/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:49:01 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/04 19:59:21 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
	i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '+' || str[i] == '-') && str[i])
	{
			i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
	result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

#include <stdlib.h>
int	main(int ac ,char **av)
{
	// const char s[] = "   -5-6";
	(void)ac;
	printf("Original Atoi: %d\n", atoi(av[1]));
	
	printf("My Atoi: %d\n", ft_atoi(av[1]));
}