/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <smontuor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:10:12 by smontuor          #+#    #+#             */
/*   Updated: 2023/10/15 17:06:27 by smontuor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*Parameters
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on
	the list.
Return value
	None
External functs
	None
Description
	Iterates the list ’lst’ and applies the function
	’f’ on the content of each node.*/