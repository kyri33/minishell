/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khamusek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 13:25:55 by khamusek          #+#    #+#             */
/*   Updated: 2016/09/01 15:45:45 by dnematan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "defs.h"
#include "twentyonesh.h"

void	ft_exit(char **cmd, int status, char *err)
{
	if (*cmd != NULL)
		free(*cmd);
	if (status == EXIT_FAILURE)
		ft_putendl_fd(err, STDERR);
	exit(status);
}
