/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:25:05 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/12 21:17:18 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_BONUS_H
# define CLIENT_BONUS_H

# include "../printf/ft_printf.h"
# include <signal.h>
# include <stdlib.h>

void	ft_sent_message(int pid, char *str);
int		ft_atoi(const char	*str);
void	ft_aprove_message(int sig, siginfo_t *test1, void *test);

#endif