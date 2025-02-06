#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int main(void)
{
	char *name = "Akancha lldlhfgworf eoitwirghfpF ROIYTIUWHFPAN";
	ft_putstr(name);
	return (0);
}