#include <stdio.h>

int func(int n){
    if(n != 1) func(n - 1);
    if(n % 2 == 0) printf("%d\n", n);

}

int main(){ 

    func(5);
    return 0;
}