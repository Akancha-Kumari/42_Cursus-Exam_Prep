#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	long result;

	while(str[i] != '\0' && (str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

int main(void)
{
	char *str = "-6536734653dgfegg6408523";
	printf("%d\n",ft_atoi(str));
	printf("%d\n", atoi(str));
}#include <stdio.h>