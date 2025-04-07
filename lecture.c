/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lecture.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsuger <bsuger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 14:52:06 by bsuger            #+#    #+#             */
/*   Updated: 2025/04/07 14:53:17 by bsuger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	
	int	fd;
	const char	*file;
	char	buffer[300];
	ssize_t	readed;

	file = "test.txt";
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((readed = read(fd, buffer, 300 - 1 )) > 0 )
	{
		buffer[readed] = '\0';
		ft_putstr(buffer);
	}
	close(fd);
}
