/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamoha <mohamoha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:22:48 by mohamoha          #+#    #+#             */
/*   Updated: 2023/07/18 21:48:27 by mohamoha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
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

/*int main()
{
    char const *str = " Split karaew adsd ";
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
}*/

/*if(!result[i])
        {
            while (i >= 0)
                free(result[i--]);
            free(result);
            return (NULL);
        }*/