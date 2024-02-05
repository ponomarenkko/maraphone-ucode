#include <unistd.h>

void mx_printstr(const char *s) {
    int acc = 0;
    while (s[acc] != '\0') {
        acc++;
    }
    write(1, s, acc);
}

