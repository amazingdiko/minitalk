/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmozella <wmozella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:03 by wmozella          #+#    #+#             */
/*   Updated: 2022/02/12 22:20:12 by wmozella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

static void	ft_sigaction(int sig)
{
	static int	current_bit = 0;
	static int	c = 0;

	if (sig == SIGUSR1)
		c = c + (1 << (7 - current_bit));
	current_bit++;
	if (current_bit == 8)
	{
		ft_printf("%c", c);
		c = 0;
		current_bit = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	s_sig;

	if (argc == 1 && argv)
	{
		ft_printf("PID = %d\n", getpid());
		while (1)
		{
			s_sig.sa_handler = ft_sigaction;
			s_sig.sa_flags = SA_SIGINFO;
			sigaction(SIGUSR1, &s_sig, 0);
			sigaction(SIGUSR2, &s_sig, 0);
			pause ();
		}
	}
	return (0);
}
