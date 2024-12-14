#include <stdio.h>

void func(int n){

    if(n == 0) return;

    if( n % 2 == 0){
        printf("%d ", n);
        func(n - 2);
    }else if(n % 2 == 1){
        printf("%d ", n - 1);
        func(n - 3);
    }
}

int main(){

    func(11);
    return 0;
}