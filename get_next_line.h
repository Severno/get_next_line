/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 22:47:16 by sapril            #+#    #+#             */
/*   Updated: 2019/09/17 22:47:16 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_GET_NEXT_LINE_H
# define GNL_GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define RED "\033[1;31m"
# define END "\033[0;0m"

# define BUFF_SIZE 8
# define MAX_FD 65536

int					get_next_line(const int fd, char **line);

#endif
