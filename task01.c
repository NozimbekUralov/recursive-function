#include <stdio.h>

void func(int n){
    if(n == 0) return;
    printf("%d\n", n);

    func(n - 1);
}

int main(){ 

    func(5);
    return 0;
}
