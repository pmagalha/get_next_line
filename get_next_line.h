/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <pmagalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 13:16:40 by pmagalha          #+#    #+#             */
/*   Updated: 2023/06/05 13:29:59 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

int		slen(char *str);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_strchr(char *s, int c);
char	*clean(char *stash);
char	*get_next_line(int fd);
char	*ft_readf(int fd, char *stash);
char	*ft_getline(char *stash);

#endif
