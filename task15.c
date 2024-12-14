#include <stdio.h>
#include <string.h>

int i = 0;
void func(char *s){
    if(s[i] == '\0') return;
    putchar(s[strlen(s) - 1 - i]);
    i++;
    func(s);
}

int main(){
    char s[] = "Hello";
    func(s);
    return 0;
}