/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 20:33:01 by ademirca          #+#    #+#             */
/*   Updated: 2023/10/28 11:31:20 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb >= 0 && nb <= 9)
		ft_putchar(nb +48);
	else if (nb < 0 && nb >= -9)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putchar(nb +48);
	}
	else if (nb > 0 && nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else if (nb < 0 && nb < -9)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}
