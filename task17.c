#include <stdio.h>
#include <string.h>

int i = 0;
int balance = 0;
int func(char *s){
    if(s[i] == '\0') return balance;
    if(s[i] == '(') balance++;
    else if (s[i] == ')') balance--;
    i++;
    func(s);
}

int main(){
    char s[] = "(12+5) - (2*5)";
    if(func(s) == 0) printf("ok");
    else printf("not ok");
    return 0;
}