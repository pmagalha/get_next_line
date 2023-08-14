/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:18:28 by pmagalha          #+#    #+#             */
/*   Updated: 2023/05/16 14:21:11 by pmagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
