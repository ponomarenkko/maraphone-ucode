void mx_printchar(char c);

void mx_str_separate(const char *str, char delim){
    int n = 0;
    while (str[n] != '\0')
    {
        if (str[n] == delim && str[n - 1] != delim) 
            mx_printchar('\n');
        else if (str[n] == delim && str[n - 1] == delim)
            mx_printchar('\0');
        else
            mx_printchar(str[n]);
        n++;
    }   
}
