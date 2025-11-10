#include <stddef.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * TODO: Describe what the function does
 */
bool valid_password(const char* s) {
    if (s == NULL)
        return false;

    int len = 0;
    int lower_count = 0;
    int upper_count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (islower(c))
            lower_count++;
        else if (isupper(c))
            upper_count++;
        else if (!isdigit(c))
            return false;

        len++;
        if (len > 10)
            return false;
    }

    if (len < 6)
        return false;

    return (lower_count >= 2 && upper_count >= 2);
}
