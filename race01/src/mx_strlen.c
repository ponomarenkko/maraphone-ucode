int mx_strlen(const char *s);
int mx_strlen(const char *s)
{
    const char *ptr = s;
    while (*ptr)
    {
        ptr++;
    }
    return ptr - s;
}

