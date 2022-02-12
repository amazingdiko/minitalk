/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:25:05 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/12 21:23:29 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include "../printf/ft_printf.h"
# include <signal.h>
# include <stdlib.h>

void	ft_sent_message(int pid, char *str);
int		main(int argc, char **argv);
int		ft_atoi(const char	*str);
void	ft_aprove_massage(int pid);

#endif