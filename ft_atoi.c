/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:49:01 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:41:54 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	sign;
	long	result;
	long	i;

	sign = 1;
	result = 0;
	i = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i])
		sign = 1 - 2 * (str[i++] == '-');
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		if ((result > LONG_MAX / 10) 
			|| (result == LONG_MAX / 10 && (str[i] - '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		result = 10 * result + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*int main(int argc, char **argv)
{
	(void)argc;
	printf("my atoi			[%d]\n", ft_atoi(argv[1]));
	printf("original atoi		[%d]\n", atoi(argv[1]));
}*/

/*int	main()
{
printf("%d\n%d\n", atoi("9223372036854775807"),ft_atoi("9223372036854775807"));

return(0);

}*/