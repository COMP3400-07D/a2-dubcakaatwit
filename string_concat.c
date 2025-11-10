#include <stddef.h>

/**
 * TODO: Describe what the function does
 */
void string_concat(char* src1, int src1_cap, const char* src2) {
    if (src1 == NULL || src2 == NULL || src1_cap <= 0)
        return;

    int len1 = 0;

    while (len1 < src1_cap - 1 && src1[len1] != '\0') {
        len1++;
    }

    int i = 0;
    while (len1 < src1_cap - 1 && src2[i] != '\0') {
        src1[len1] = src2[i];
        len1++;
        i++;
    }

    src1[len1] = '\0';
}
