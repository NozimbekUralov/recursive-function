#include <stdio.h>

void func(int n){
    if(n == 0) return;

    puts("Hello Code");
    func(n - 1);
}

int main(){ 

    func(5);
    return 0;
}