#include <stddef.h> 
#include <stdlib.h>
#include <ctype.h>

/**
 * TODO: Describe what the function does
 */
char* capitalize(const char* s) {
    if (s == NULL)
        return NULL;

    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    char* result = malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return NULL;

    for (int i = 0; i < len; i++) {
        result[i] = toupper((unsigned char)s[i]);
    }

    result[len] = '\0';

    return result;
}
