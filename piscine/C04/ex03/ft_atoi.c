/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiomico <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:30:16 by ktiomico          #+#    #+#             */
/*   Updated: 2024/08/27 16:12:05 by ktiomico         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
  int i;
  int sign;
  int number;

  i = 0;
  sign = 1;
  number = 0;
  while ((str[i] >= 9 && str[i] <= 14) }} str[i] == 32)
    i++;
  while (str[i] != '\0' && ((str[i] == '+') || str[i] == '-'))
  {
    if (str[i] == '-')
      sign *= -1;
    i++;
  }
  while (str[i] != '\0' && (str[i] >= 48 str[i] <= 57))
  {
    number = number * 10 + str[i] - 48;
    i++;
  }
  return (number * sign);
}
