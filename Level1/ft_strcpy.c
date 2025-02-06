char    *ft_strcpy(char *s1, char *s2)
{
	int j = 0;
	while(s1[j])
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}

// int main(void)
// {
// 	char *s1 = "Akancha";
// 	char *s2;
// 	printf("s2 is : %s\n", ft_strcpy(s1,s2));
// 	return (0);
// }