/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademirca <ademirca@student.42.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:45:35 by ademirca          #+#    #+#             */
/*   Updated: 2023/11/09 20:13:23 by ademirca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			write (1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}
