/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <smontuor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:11:06 by smontuor          #+#    #+#             */
/*   Updated: 2023/10/16 16:18:57 by smontuor         ###   ########.fr       */
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

void	ft_putchar_fd(char c, int fd)
{
	if (ft_check_fd(fd) == -1)
		return ;
	if (write(fd, &c, 1) == -1)
	{
		return ;
	}
}
/*write(2, "Error occurred in ft_putchar_fd\n", 32);*/

/*Parameters
	c: The character to output.
	fd: The file descriptor on which to write.
Return value
	None
External functs
	write
Description
	Outputs the character ’c’ to the given file
	descriptor.*/