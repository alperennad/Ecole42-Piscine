/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:37:41 by ademirca          #+#    #+#             */
/*   Updated: 2023/10/28 11:24:19 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 48;
	while (x <= 57)
	{
		write(1, &x, 1);
		x++;
	}
}