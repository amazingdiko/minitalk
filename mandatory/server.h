/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:03 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/12 21:25:17 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "../printf/ft_printf.h"
# include <signal.h>
# include <stdlib.h>

static void	ft_sigaction(int sig);
int			main(int argc, char **argv);

#endif