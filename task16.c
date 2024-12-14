#include <stdio.h>

int s = 0;
int sum(int n){
    if(n == 0) return s;
    s += n % 10;
    sum(n / 10);
    return s;
}

int main(){
    printf("%d", sum(1234));
    return 0;
}