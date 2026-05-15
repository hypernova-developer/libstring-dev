#ifndef STRING_H
#define STRING_H

#include "vector.h"
#include <string.h>

VECTOR_TYPE(char)

typedef Vector_char String;

static inline void string_init(String *s)
{
    vector_init_char(s);
    vector_push_char(s, '\0');
    s->size = 0; 
}

static inline void string_set(String *s, const char *str)
{
    size_t len = strlen(str);
    
    s->size = 0;
    
    for (size_t i = 0; i < len; i++)
    {
        vector_push_char(s, str[i]);
    }
    
    vector_push_char(s, '\0');
    s->size = len;
}

static inline void string_append(String *s, const char *str)
{
    size_t add_len = strlen(str);
    
    if (s->size > 0 || (s->capacity > 0 && s->data[0] == '\0'))
    {
        s->size = s->size;
    }

    for (size_t i = 0; i < add_len; i++)
    {
        vector_push_char(s, str[i]);
    }
    
    vector_push_char(s, '\0');
    s->size = s->size - 1;
}

static inline void string_free(String *s)
{
    vector_free_char(s);
}

#endif
