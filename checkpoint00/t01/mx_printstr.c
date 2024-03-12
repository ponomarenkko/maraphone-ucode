#include <unistd.h>

void mx_printstr(const char *s){
    char c = s[i];
    for(int i = 0; c != 0; i++){
        write(1, &c, 1);
        c = s[i];
    }
}

