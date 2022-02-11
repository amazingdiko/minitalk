#include "client_bonus.h"

int	ft_atoi(const char	*str)
{
	int		i;
	int		negative;
	long	result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i ++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (result * negative > 2147483647)
			return (-1);
		else if (result * negative < -2147483648)
			return (0);
		result = result * 10 + str[i] - '0';
		i ++;
	}
	return (result * negative);
}

void ft_sent_message (int pid, char *str)
{
	int	i;
	int	bit;

	i = 0;
	while (str[i] != '\0')
	{
		bit = 7;
		while (bit >= 0)
		{
			if (str[i] & 1 << bit)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit--;
			usleep(400);
		}
		i++;
	}
}

int ft_aprove_massage(int sig)
{
	if (sig == SIGUSR1)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	struct sigaction s_sig;
    int pid;
	int	sig;
	
	if (argc < 3)
		ft_printf("Write a PID and a message.\n");
    if (argc == 3)
    {
		s_sig.sa_flags = SA_SIGINFO;
		sigaction(SIGUSR1, &s_sig, 0);
		s_sig.sa_handler = (void *)ft_aprove_massage;
		if (ft_aprove_massage == 1)
			ft_printf("Signal recieved.\n");
        pid = ft_atoi(argv[1]);
        ft_sent_message(pid, argv[2]);
	}
    return (0);
}