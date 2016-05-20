/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vatourni <vatourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/18 15:45:09 by vatourni          #+#    #+#             */
/*   Updated: 2015/03/18 15:45:10 by vatourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
# define ASM_H

# include <unistd.h>
# include <stdlib.h>

char		*ft_strcat(char *s1, const char *s2);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isdigit(int c);
void		ft_bzero(void *s, size_t n);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
size_t		ft_strlen(char *s);
int			ft_puts(const char *s);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, void *src, size_t n);
char		*ft_strdup(const char *s1);

int			ft_power(int nb, int pow);
int			ft_isblank(int c);
void		ft_strclr(char *str);
void		ft_putstr(char *str);
void		ft_putstr_fd(char *str, int fd);

#endif
