/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:16:33 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 11:06:30 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *ptr;

	ptr = (t_list *)malloc(sizeof(*ptr));
	if(!ptr)
		return (NULL);
	ptr -> content = content;
	ptr -> next = NULL;
	return (ptr);
}

/*int main(void)
{
	char ptr[]= "Uso des";
	
	
}*/