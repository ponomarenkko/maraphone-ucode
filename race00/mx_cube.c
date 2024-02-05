#include <unistd.h>
void mx_printchar(char c);

void mx_cube(int n) {
    if (n <= 1) return;
    for (int i = 0; i <= 2 * n + 2 + n / 2; i++) {
        if (i < n / 2 + 1) {
            mx_printchar(' ');
            continue;
        }
        if (i == n / 2 + 1 || i == n * 2 + 2 + n / 2) {
            mx_printchar('+');
            continue;
        }
        else mx_printchar('-');
    }
    write(1, "\n", 1);
    int k = 0;
    while (k < n / 2) {
        for (int j = 0; j <= 2 * n + 2 + n / 2; j++) {
            if (j == n / 2 - k || j == 2 * n - k + 1 + n / 2) {
                mx_printchar('/');
                continue;
            }
            else if (j == 2 * n + 2 + n / 2) {
                mx_printchar('|');
            }
            else mx_printchar(' ');
        }
        write(1, "\n", 1);
        k++;
    }
    for (int e = 0; e <= 2 * n + 2 + n / 2; e++) {
        if (e == 0 || e == 2 * n + 1) {
            mx_printchar('+');
            continue;
        }
        else if (e > 2 * n + 1 && e < 2 * n + 2 + n / 2) mx_printchar(' ');
        else if (e == 2 * n + 2 + n / 2) mx_printchar('|');
        else mx_printchar('-');
    }
    write(1, "\n", 1);
    int b = 0;
    if (n % 2 == 0)  b = n / 2 - 1;
    else b = n / 2;
    for (int p = 0; p < b; p++) {
        int y = 0;
        while (y <= 2 * n + 2 + n / 2) {
            if (y == 0 || y == 2 * n + 1 || y == 2 * n + 2 + n / 2) {
                mx_printchar('|');
                y++;
                continue;
            }
            else mx_printchar(' ');
            y++;
        }
        write(1, "\n", 1);
    }
    for (int w = 0; w <= 2 * n + 2 + n / 2; w++) {
        if (w == 0 || w == 2 * n + 1) {
            mx_printchar('|');
            continue;
        } if (w == 2 * n + 2 + n / 2) mx_printchar('+');
        else mx_printchar(' ');
    }
    write(1, "\n", 1);
    int o = 0;
    while (o < n / 2) {
        int h = 0;
        int q = n / 2;
        while (h < 2 * n + 2 + n / 2) {
            if (h == 0 || h == 2 * n + 1 - k + n / 2) {
                mx_printchar('|');
                h++;
            } if (h == 2 * n + 2 - o + n / 2 - 1) {
                mx_printchar('/');
                q--;
                break;
            }
            else mx_printchar(' ');
            h++;
        }
        write(1, "\n", 1);
        o++;
    }
    for (int t = 0; t < 2 * n + 2; t++) {
        if (t == 0 || t == n * 2 + 1) {
            mx_printchar('+');
            continue;
        }
        else mx_printchar('-');
        
    }
    write(1, "\n", 1);
}

