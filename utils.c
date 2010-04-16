/*
    bj_strcpy:
    like `strcpy`, but updates the `destination` by the number of bytes copied.
    (thus, `destination` is a char pointer pointer / a pointer to a char array.)
*/
static inline void
bj_strcpy(char** destination, const char* source)
{
    while (( **destination = *source )) {
        source++;
        (*destination)++;
    };
}

static inline void
bj_http_to_wsgi_header(char* destination, const char* source, size_t length)
{
    int i;
    for(i=0; i<length; ++i)
    {
        if(source[i] == '-')
            *destination++ = '_';
        else
            *destination++ = toupper(source[i]);
    }
    *destination++ = '\0';
}
