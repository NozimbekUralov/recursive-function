#include <stdio.h>

void EKUB(int a, int b){
    if(a % b == 0) printf("%d", b);
    else EKUB(b, a % b);
}

int main(){

    EKUB(8, 16);

    return 0;
}