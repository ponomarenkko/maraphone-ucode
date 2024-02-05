#include <stdio.h>

int mx_strlen(const char *s) {
    int n = 0;
    
    if (!s)
        return 0;
    while (s[n])
        n++;
    return n;
}
