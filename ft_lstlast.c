/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:08:50 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 15:23:02 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return NULL;
    while (lst->next != NULL)
    {
        lst = lst->next;
    }
    return lst;
}

/*int main(void)
{
    t_list *head = ft_lstnew("10");
	head->next = ft_lstnew("20");
	head->next->next = ft_lstnew("30");
    
	t_list *lastNode = ft_lstlast(head);
    printf("%s\n", (char *)lastNode->content);

    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
	
    return 0;
}*/