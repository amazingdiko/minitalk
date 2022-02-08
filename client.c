#include "client.h"

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

void ft_sent_message (char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i ++;
    }
}

int main (int argc, char **argv)
{
    int pid;

    if (argc == 3)
    {
        pid = ft_itoa(argv[1]);
        ft_sent_message(argv[2]);
    }
    return (0);
}