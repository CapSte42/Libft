/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <smontuor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:05:44 by smontuor          #+#    #+#             */
/*   Updated: 2023/10/16 17:44:58 by smontuor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_fd(int fd)
{
	if (fd < 0)
	{
		return (-1);
	}
	return (1);
}
/*write(2, "Invalid file descriptor\n", 24);*/

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (ft_check_fd(fd) == -1)
		return ;
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
}

/*Parameters
	n: The integer to output.
	fd: The file descriptor on which to write.

Return value
	None
	
External functs
	write
	
Description
	Outputs the integer ’n’ to the given file
	descriptor.*/