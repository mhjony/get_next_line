/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jony <jony@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:54:17 by mhasan            #+#    #+#             */
/*   Updated: 2019/12/17 22:35:40 by jony             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#define BUFF_SIZE 10
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft/libft.h"

int get_next_line(const int fd, char **line);
char *ft_strnew(size_t size);

#endif