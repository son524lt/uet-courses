#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char* str = (char*)malloc(sizeof(char));
    int i = 0,size=1;
    char a;
    while (1) {
        a = getchar();
        if (a==*"\n") break;
        if (a>=*"A"&&a<=*"Z") a+=(*"a"-*"A");
        else if (a>=*"a"&&a<=*"z") a+=(*"A"-*"a");
        str[i]=a;
        str = (char*)realloc(str,++size);
        str[++i]=0;
    }
    for (int i = strlen(str)-1; i >= 0; i--) printf("%c",str[i]);
}