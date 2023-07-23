/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 12:32:46 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 15:22:43 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *newnode)
{
	if (!*lst)
	{
		*lst = newnode;
		return ;
	}
	t_list *current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newnode;
}


/*int main(void)
{
    t_list *head = ft_lstnew("10");
    t_list *newNode = ft_lstnew("40");
	
	head->next = ft_lstnew("20");
	head->next->next = ft_lstnew("30");
    
	ft_lstadd_back(&head, newNode);

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