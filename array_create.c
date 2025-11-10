#include <stddef.h>
#include <stdlib.h>

/**
 * TODO: Describe what the function does
 */
int* array_create_evens(int begin, int end) {
    if (begin > end)
        return NULL;

    if (begin % 2 != 0)
        begin++;

    if (end % 2 != 0)
        end--;

    if (begin > end)
        return NULL;

    int count = ((end - begin) / 2) + 1;

    int* arr = malloc(sizeof(int) * count);
    if (arr == NULL)
        return NULL;

    int value = begin;
    for (int i = 0; i < count; i++, value += 2) {
        arr[i] = value;
    }

    return arr;
}
