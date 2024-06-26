#include <stdio.h>
#include <ctype.h>

char* ToLowercase(char* string) {
    char* temp = string;
    int i = 0;
    while(temp[i]) {
        temp[i] = tolower(temp[i]);
        i++;
    }
    return temp;
    temp = NULL;
}