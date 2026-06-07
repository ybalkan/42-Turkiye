/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybalkan <ybalkan@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:39:05 by iuslu             #+#    #+#             */
/*   Updated: 2026/05/25 22:12:59 by ybalkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	y;

	y = 0;
	while (y[str])
	{
		write(1, str + y, 1);
		y++;
	}
}

//----------MAIN----------//

int main(void)
{
	ft_putstr("hello worrld");
}
