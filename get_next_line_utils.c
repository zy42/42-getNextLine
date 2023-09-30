/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzeng <yzeng@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 19:33:08 by yzeng             #+#    #+#             */
/*   Updated: 2023/10/01 01:40:59 by zengying         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
size_t  ft_strlen(const char *s)
{
        size_t  count;

        count = 0;
        while (s[count] != '\0')
        {
                count += 1;
        }
        return (count);
}

char    *char_memcpy(char *src, size_t n)
{
        char   *dest;
        size_t                  i;

        i = 0;
        //printf("check memcpy: %s\n",src);
        dest = (char *) malloc(n * sizeof(char));
        if (!dest || !src)
                return (NULL);
        while (i < n)
        {
                dest[i] = src[i];
                //printf("check memcpy: %c\n",src[i]);
                i++;
        }
        return (dest);
}
