#include <stdio.h>
#include "string_utils.h"

int string_length(char *str) {
    int i = 0;
    while(str[i] != '\0') i++;
return i + 1;
}

void string_copy(char *src, char *dest) {
    int i = 0;
    do{
        dest[i] = src[i];
        i++;
    } while(src[i] != '\0');
    dest[i] = '\0';
}

void string_upper(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') str[i] += 'A' - 'a';
    }
}

void string_lower(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') str[i] -= 'A' - 'a';
    }
}

void string_reverse(char *str) {
    int i;
    for(i = 0; str[i] != '\0'; i++);
    i--;
    for(i; i >= 0; i--) {
        printf(str[i]);
    }
}
