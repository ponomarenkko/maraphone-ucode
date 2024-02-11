#include <stdlib.h>

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL) 
	    return NULL;
    if (s2 == NULL) 
	    return mx_strdup(s1);
    if (s1 == NULL) 
	    return mx_strdup(s2);
    int size1 = mx_strlen(s1), size2 = mx_strlen(s2);
    int size3 = size1 + size2;
    char *str = mx_strnew(size3);
    str = mx_strcpy(str, s1);
    str = mx_strcat(str, s2);
    return str;
}

