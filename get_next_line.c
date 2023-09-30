/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:27:13 by yzeng             #+#    #+#             */
/*   Updated: 2023/10/01 02:14:29 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdio.h>

char    *find_next_line(char *buffer)
{
	size_t	line_len = 0;
	while (*buffer != '\n')
	{
		buffer++;
		line_len++;
	}
	//if end of buffer
	if (!buffer && !line_len)
		return (NULL);
	line = char_memcpy(buffer - line_len, line_len + 1);
	buffer++;
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	int	read_status;
	char	*line;
	
	read_status = 1;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!buffer)
	{
		buffer = (char *) malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (!buffer)
			return (NULL);
		read_status = read(fd, buffer, BUFFER_SIZE);
		buffer[BUFFER_SIZE + 1] = '\0';
	}
	if (read_status)
		line = find_next_line(buffer);
	return(line);
}

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
}
