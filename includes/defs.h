/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khamusek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 13:38:26 by khamusek          #+#    #+#             */
/*   Updated: 2016/07/08 15:18:10 by khamusek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFS_H
# define DEFS_H

# include "libft.h"

# define MAX_PATH_SIZE 4096

const char	*ft_get_user();
void		ft_exit(char **cmd, int status, char *err);
void		ft_parse_command(char **cmd);
void		ft_echo(char **cmd);
t_bool		ft_fill_args(char **cmd, char ***argv);
void		ft_del_args(char ***argv);
void		ft_cd(char **cmd);
void		ft_error(char *err, char *err_info);
void		ft_setenv(char **cmd);
char		*ft_get_env_name(char *eq);
char		*ft_get_env_val(char *eq);
void		ft_env(void);
void		ft_pwd(void);
void		ft_unsetenv(char **cmd);
void		ft_execute(char **cmd);

#endif
