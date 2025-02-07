#include <stdio.h>

char *ft_strrev(char *str)
{
	int i = 0;
	char temp;
	while (str[i])
		i++;
	int j = 0;
	while (j < i / 2)
	{
		temp = str[j];
		str[j] = str[i - 1 - j];
		str[i - 1 - j] = temp;
		j++;
	}
	return (str);
}

int main(void)
{
	char str[] = "Akancha";
	printf("%s\n", ft_strrev(str));
	return (0);
}
