/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:20:06 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/03 16:48:41 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*new2;

	lst = ft_lstnew("Hello");
	new = ft_lstnew("World");
	new2 = ft_lstnew("42");
	lst->next = new;
	new->next = new2;
	ft_lstadd_back(&lst, ft_lstnew("Bruh"));
	while (lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}
*/
