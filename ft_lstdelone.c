/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:21:05 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 15:17:19 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
	{
		return ;
	}
	(del)(lst->content);
	free(lst);
}

/*void deleteContent(void *content)
{
    if (content)
    {
        free(content);
    }
}*/

/*int main(void)
{
    t_list *head = ft_lstnew(strdup("10"));
    head->next = ft_lstnew(strdup("20"));
    head->next->next = ft_lstnew(strdup("30"));

    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

	printf("=====================\n");

	
    t_list *toDelete = head->next;
    ft_lstdelone(toDelete, deleteContent);
	
	current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

	t_list *current_free = head;
	while (current != NULL)
	{
		t_list *temp = current_free;
		current_free = current_free->next;
		free(temp->content);
		free(temp);
	}
    return 0;
}*/