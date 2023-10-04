/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:17:56 by yzeng             #+#    #+#             */
/*   Updated: 2023/10/05 05:07:03 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd);
char	*find_next_line(char *buffer, char **line);
size_t  ft_strlen(const char *s);
char    *char_memcpy(char *src, size_t n);

#endif
