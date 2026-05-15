#include "string.h"
#include <stdio.h>

int main()
{
    String greeting;
    string_init(&greeting);

    string_set(&greeting, "Hello from ");
    string_append(&greeting, "libstring-dev!");

    printf("--- String Engine Test ---\n");
    printf("Content:  %s\n", greeting.data);
    printf("Size:     %zu characters\n", greeting.size);
    printf("Capacity: %zu bytes\n\n", greeting.capacity);

    printf("--- Integer Vector Test ---\n");
    
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

    string_append(&greeting, " Powered by hypernova-developer.");
    printf("\n--- Final String Result ---\n");
    printf("%s\n", greeting.data);
    printf("Final Capacity: %zu\n", greeting.capacity);

    string_free(&greeting);
    vector_free_int(&scores);

    return 0;
}
