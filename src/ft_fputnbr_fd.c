/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputnbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rumachad <rumachad@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 09:41:53 by rumachad          #+#    #+#             */
/*   Updated: 2024/02/06 14:30:27 by rumachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fprintf.h"

static int	len(int num)
{
	int	i;

	i = 0;
	if (num < 0 || num == 0)
		i++;
	while (num != 0)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

int	ft_fputnbr_fd(int n, int fd)
{
	int	i;

	i = len(n);
	if (n == -2147483648)
	{
		ft_fputchar_fd('-', fd);
		ft_fputchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_fputchar_fd('-', fd);
		n = -n;
	}
	if (n < 10)
	{
		n = n + '0';
		ft_fputchar_fd(n, fd);
	}
	else
	{
		ft_fputnbr_fd(n / 10, fd);
		ft_fputnbr_fd(n % 10, fd);
	}
	return (i);
}