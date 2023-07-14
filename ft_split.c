#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(const char *str, char delimiter) {
    int count;
    int if_word;

    count = 0;
    if_word = 0;
    while (*str) {
        if (*str != delimiter) {
            if (!if_word) {
                if_word = 1;
                count++;
            }
        } else {
            if_word = 0;
        }
        str++;
    }
    return count;
}

char **ft_split(const char *str, char delimiter) {
    int words_counter;
    char **result;
    int words_len;
    int i;

    words_counter = count_words(str, delimiter);
    result = (char **)malloc((words_counter + 1) * sizeof(char *));
    i = 0;
    while (*str) {
        if (*str != delimiter) {
            const char *start = str;
            while (*str && *str != delimiter) {
                str++;
            }
            words_len = str - start;
            result[i] = (char *)malloc((words_len + 1) * sizeof(char));

            /*char *word = result[i];
            while (start < str) {
                *word++ = *start++;
            }
            *word = '\0';
            i++;
        } else {
            str++;
        }
    }*/
            /*strncpy(result[i], start, words_len);*/

            /*result[i] = strndup(start, word_length);*/
            
            result[i][words_len] = '\0';
            i++;
        } else {
            str++;
        }
    }

    result[words_counter] = NULL;
    return result;
}

void free_split(char **split) {
    if (split) {
        char **ptr = split;
        while (*ptr) {
            free(*ptr);
            ptr++;
        }
        free(split);
    }
}

int main() {
    const char *str = "Mohamed$adil";
    char delimiter = '$';

    char **split = ft_split(str, delimiter);
    if (split) {
        char **ptr = split;
        while (*ptr) {
            printf("%s\n", *ptr);
            ptr++;
        }
        free_split(split);
    }

    return 0;
}
