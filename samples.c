#include "string.h"
#include <stdio.h>

/**
 * @file samples.c
 * @brief Demonstration of the libstring-dev and libvector-dev ecosystem.
 * @author hypernova-developer
 */

int main()
{
    /* 1. Dynamic String Operations */
    String greeting;
    string_init(&greeting);

    string_set(&greeting, "Hello from ");
    string_append(&greeting, "libstring-dev!");

    printf("--- String Engine Test ---\n");
    printf("Content:  %s\n", greeting.data);
    printf("Size:     %zu characters\n", greeting.size);
    printf("Capacity: %zu bytes\n\n", greeting.capacity);

    /* 2. Direct Vector Operations (The Engine) */
    printf("--- Integer Vector Test ---\n");
    
    /* We can still use libvector-dev independently */
    VECTOR_TYPE(int)
    Vector_int scores;
    vector_init_int(&scores);

    for (int i = 1; i <= 5; i++)
    {
        vector_push_int(&scores, i * 100);
    }

    for (size_t i = 0; i < scores.size; i++)
    {
        printf("Score [%zu]: %d\n", i, scores.data[i]);
    }

    /* 3. Safety & Capacity Demonstration */
    string_append(&greeting, " Powered by hypernova-developer.");
    printf("\n--- Final String Result ---\n");
    printf("%s\n", greeting.data);
    printf("Final Capacity: %zu\n", greeting.capacity);

    /* Clean up all dynamic resources */
    string_free(&greeting);
    vector_free_int(&scores);

    return 0;
}
