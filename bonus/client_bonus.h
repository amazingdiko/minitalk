/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitaliy <vitaliy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:25:05 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/11 17:32:53 by vitaliy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLIENT_BONUS_H
# define CLIENT_BONUS_H

#include "../printf/ft_printf.h"
#include <signal.h>
#include <stdlib.h>

void	ft_sent_message (int pid, char *str);
int		main (int argc, char **argv);
int		ft_atoi(const char	*str);
int ft_aprove_massage (int sig);

#endif