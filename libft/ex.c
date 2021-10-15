int		isset(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_count(char const *s1, char const *set)
{
	int		beg;
	int		i;
	int		end;

	beg = 0;
	i = 0;
	end = 0;
	while (isset(s1[i], set))
	{
		beg++;
		i++;
	}
	while (s1[i])
		i++;
	while (isset(s1[i - end - 1], set) && (i - end - 1) > 0)
		end++;
	return (i - (beg + end));
}

char	*emptystr(void)
{
	char	*ret;

	if (!(ret = malloc(1 * sizeof(char))))
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*ret;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = ft_count(s1, set);
	if (i < 1)
	{
		return (emptystr());
	}
	if (!(ret = malloc((i + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	k = 0;
	while (isset(s1[j], set))
		j++;
	while (k < i)
	{
		ret[k] = s1[j + k];
		k++;
	}
	ret[k] = '\0';
	return (ret);
}

