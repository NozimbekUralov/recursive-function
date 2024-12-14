#include <stdio.h>
int i = 1;
void func(int n){
    if(i > n) return;
    printf("%d x %d = %d\n", n, i++, n * i);
    func(n);
}

int main(){
    func(9);
    return 0;
}