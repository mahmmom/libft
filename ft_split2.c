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

char *copy_word(const char *start, const char *end) {
    size_t word_len = end - start;
    char *word = (char *)malloc((word_len + 1) * sizeof(char));
    strlcpy(word, start, word_len);
    word[word_len] = '\0';
    return word;
}

char **ft_split(const char *str, char delimiter) {
    int words_counter = count_words(str, delimiter);
    char **result = (char **)malloc((words_counter + 1) * sizeof(char *));
    int i = 0;

    while (*str) {
        if (*str != delimiter) {
            const char *start = str;
            while (*str && *str != delimiter)
                str++;
            result[i++] = copy_word(start, str);
        }
        str++;
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
