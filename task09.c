#include <stdio.h>
int func(int n, int p){
    if (n == 1 || p == 0) return 1;
    return n * func(n, p - 1);
}

int main(){
    printf("%d", func(2, 3));
    return 0;
}