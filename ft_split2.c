#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	count_words(char const *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*get_next_word(char const **s, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = (*s)[i];
		i++;
	}
	word[i] = '\0';
	*s += len;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		num_words;
	int		i;

	if (!s)
		return (NULL);
	num_words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < num_words)
	{
		while (*s && *s == c)
			s++;
		result[i] = get_next_word(&s, c);
		i++;
	}
	result[i] = NULL;
	return (result);
}

int main()
{
    char const *str = "Split this string by spaces";
    char **words = ft_split(str, ' ');

    if (words)
    {
        int i = 0;
        while (words[i])
        {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]);
            i++;
        }
        free(words);
    }
    else
    {
        printf("Error: ft_split returned NULL.\n");
    }

    return 0;
}
