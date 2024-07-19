/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <smontuor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:11:18 by smontuor          #+#    #+#             */
/*   Updated: 2023/10/16 18:02:14 by smontuor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_s_fd(char *s)
{
	if (s == NULL)
	{
		return (-1);
	}
	return (1);
}
/*write(2, "String passed as parameter is NULL\n", 35);*/

static int	ft_check_fd(int fd)
{
	if (fd < 0)
	{
		return (-1);
	}
	return (1);
}
/*write(2, "Invalid file descriptor\n", 24);*/

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	size_s;
	ssize_t			byte_wrt;
	size_t			tot_byte_wrt;

	if (ft_check_s_fd(s) == -1 || ft_check_fd(fd) == -1)
		return ;
	size_s = ft_strlen(s);
	tot_byte_wrt = 0;
	while (tot_byte_wrt < size_s)
	{
		byte_wrt = write(fd, s + tot_byte_wrt, size_s - tot_byte_wrt);
		if (byte_wrt == -1)
		{
			return ;
		}
		tot_byte_wrt += byte_wrt;
	}
	if (tot_byte_wrt < size_s)
		return ;
}

/*write(2, "Error occurred in ft_putstr_fd\n", 31);
  write(2, "Could not write the entire string in ft_putstr_fd\n", 49);*/
/*Parameters
	s: The string to output.
	fd: The file descriptor on which to write.
Return value
	None
External functs
	write
Description
	Outputs the string ’s’ to the given file
	descriptor

int main ()
{
	char *s = {"che bella giornata\n"};
	ft_putstr_fd(s, -1);
}*/