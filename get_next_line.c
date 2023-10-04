/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:27:13 by yzeng             #+#    #+#             */
/*   Updated: 2023/10/05 05:08:18 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>

char 	*find_next_line(char *buffer, char **line)
{
	size_t	byte;

	byte = 0;
	if (*line)
		free(*line);
	while (*buffer && *buffer != '\n')
	{
		buffer++;
		byte++;
	}
	if (!buffer && !byte)
		return(NULL);
	*line = char_memcpy(buffer - byte, byte + 1);
	return (buffer + 1);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	static char	*line;
	int	read_stat;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
	{
		buffer = (char *) malloc ((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		read_stat = read(fd, buffer, BUFFER_SIZE);
		if (read_stat == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[BUFFER_SIZE] = '\0';
	}
	buffer = find_next_line(buffer, &line);
	return(line);
}
/*
#include <stdio.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	if (!ac)
		return (0);
	int fd1 = open(av[1], O_RDONLY);
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd1));
	printf("%s",get_next_line(fd1));
	return (0);
}*/
