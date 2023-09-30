/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 02:17:56 by yzeng             #+#    #+#             */
/*   Updated: 2023/10/01 02:20:21 by yzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

char    *find_next_line(char *buffer);
char	*get_next_line(int fd);
size_t  ft_strlen(const char *s);
char    *char_memcpy(char *src, size_t n);

#endif
