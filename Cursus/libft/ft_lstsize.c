/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:22:18 by ktiomico          #+#    #+#             */
/*   Updated: 2024/10/03 15:47:10 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
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
	printf("%d\n", ft_lstsize(lst));
}
*/
