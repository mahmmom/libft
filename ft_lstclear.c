/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:59:27 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 16:41:07 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*temp;
	
	if (!lst ||!del)
	{
		return ;
	}
	ptr = *lst;
	while (ptr != NULL)
	{
		temp = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = temp;
	}
	*lst = NULL;
}

/*void delcont(void *content)
{
    if (content)
    {
        free(content);
    }
}

int main(void)
{
    t_list *head = ft_lstnew(strdup("Alice"));
    head->next = ft_lstnew(strdup("Bob"));
    head->next->next = ft_lstnew(strdup("Charlie"));

    t_list *current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

	printf("====================\n");

    ft_lstclear(&head, delcont);

    current = head;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}*/