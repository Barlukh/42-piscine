/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgazur <bgazur@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:27:35 by bgazur            #+#    #+#             */
/*   Updated: 2025/02/22 18:29:34 by bgazur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
