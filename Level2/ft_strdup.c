#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *src)
{
	int i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
char *ft_strdup(char *src)
{
	char *dest;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!dest)
		return (NULL);
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	printf("%s\n", ft_strdup("Akacha"));
	printf("%s\n", strdup("Akacha"));
	return (0);
}
