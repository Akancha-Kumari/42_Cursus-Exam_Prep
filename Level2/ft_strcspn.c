#include <stdio.h>
#include <string.h>

int ft_strlen(const char *s)
{
	int i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
size_t ft_strcspn(const char *s, const char *reject)
{
	int j = 0;
	int i;
	while (reject[j])
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			i++;
		}
		j++;
	}
	return (ft_strlen(s));
}

int main(void)
{
	printf("%lu\n", ft_strcspn("Akancha", "th"));
	printf("%lu\n", strcspn("Akancha", "th"));
	return (0);
}
