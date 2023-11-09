/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicgonza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:06:52 by nicgonza          #+#    #+#             */
/*   Updated: 2023/10/30 13:59:15 by nicgonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

/*typedef struct s_list
{
	char			*str_buf;
	struct s_list	*next;
}					t_list;

int		found_newline(t_list *list);
t_list	*find_last_node(t_list *list);
char	*ft_get_line(t_list *list);
void	copy_str(t_list *list, char *str);
int		str_len(t_list *list);
void	polish_list(t_list **list);
char	*get_next_line(int fd);
void	dealloc(t_list **list, t_list *clean_node, char *buf);
void	create_list(t_list **list, int fd);*/

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t b);

size_t	ft_strlen(const char *str);
#endif
