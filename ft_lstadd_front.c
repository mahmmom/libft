/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:22:09 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 15:22:49 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *newnode)
{
	if (!*lst)
	{
		*lst = newnode;
		return;
	}
	newnode->next = *lst;
	*lst = newnode;
}

/*int main(void)
{
    t_list *head = ft_lstnew("10");
	head->next = ft_lstnew("20");
	head->next->next = ft_lstnew("30");
	
	t_list *newNode = ft_lstnew("40");
    
	ft_lstadd_front(&head, newNode);

    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    while (head != NULL)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/