#include <stdbool.h>
#include <stdlib.h>
bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str)
{
    if (str == NULL) {
        return NULL;
    }
    
    int len = mx_strlen(str);
    int start = 0, end = len - 1;
    
    while (mx_isspace(str[start])) {
        start++;
    }
    
    while (end >= start && mx_isspace(str[end])) {
        end--;
    }
    
    int new_len = end - start + 1;
    char *trimmed_str = mx_strnew(new_len);

    for (int i = 0; i < new_len; i++) {
        trimmed_str[i] = str[start + i];
    }
    
    return trimmed_str;
}

