#include <stdlib.h>
// #include <stdio.h>

char		**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
    split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
        split[k] = (char *)malloc(sizeof(char) * 4096);
		if (!split)
			return (NULL);

		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
			split[k][j++] = str[i++];

		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;

		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}


int		main()
{
	char **arr;

	char *phrase = "   Hello,   Flavio\t    Wuensche !  ";
	arr = ft_split(phrase);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
	printf("%s\n", arr[2]);
	printf("%s\n", arr[3]);
}
