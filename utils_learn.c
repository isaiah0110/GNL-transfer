




void	ft_bzero(void *s, size_t n)
{
	char *str;

	str = (char *)s;
	while (n != 0)
	{
		*str = '\0';
		*str++;
		n--;
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*strjoin(const char *s1, const char *s2)
{
	char *result;
	size_t	total;
	char *temp;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);
	temp = result;
	while (*s1 != '\0')
	{
		*temp = *s1;
		*temp++;
		*s1++
	}
	while (*s2 != '\0')
	{
		*temp = *s2;
		*temp++;
		*s2++
	}
	return (result);
}

