/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:32:19 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 17:08:24 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	if (!lst ||!f)
		return ;
	ptr = lst;
	while (ptr != NULL)
	{
		temp = ptr->next;
		(f)(ptr->content);
		ptr = temp;
	}
}

/*void add_char(void *content)
{
	if (content)
    {
		*(char *)content = *(char *)content + 1;
    }
}

int main(void)
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

    current = head;
	ft_lstiter(current, add_char);
	
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

	t_list *current_free = current;
	while (current != NULL)
	{
		t_list *temp = current_free;
		current_free = current_free->next;
		free(temp->content);
		free(temp);
	}
    return 0;
}*/