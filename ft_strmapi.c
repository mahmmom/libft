#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*dest;
	size_t	len;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(dest = malloc((len + 1) * sizeof(char))))
		return (NULL);
	dest[len] = '\0';
	while (s[i] != '\0')
	{
		dest[i] = (*f)(i, s[i]);
		i++;
	}
	return (dest);
}
