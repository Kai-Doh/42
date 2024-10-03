/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:34:03 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/03 16:12:05 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	lst = ft_lstnew("Hello");
	lst2 = ft_lstnew("World");
	lst3 = ft_lstnew("!");
	lst4 = ft_lstnew("Bruh");
	lst->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	printf("%s\n", (char *)ft_lstlast(lst)->content);
}
*/
