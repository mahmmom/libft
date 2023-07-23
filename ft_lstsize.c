/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:23:33 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/22 16:27:46 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	count = 0;
	temp = lst;
	while (temp != NULL)
	{
		temp = temp -> next;
		count++;
	}
	return (count);
}

/*int main(void)
{
    t_list	*head = ft_lstnew(("Mohamed"));
    head->next = ft_lstnew("42");
	
	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	t_list *count = head;
	int size = ft_lstsize(count);
    printf("Number of nodes in the list: %d\n", size);

    t_list* current = head;
    while (current != NULL)
	{
        t_list* temp = current;
        current = current->next;
        free(temp);
    }
    return 0;
}*/