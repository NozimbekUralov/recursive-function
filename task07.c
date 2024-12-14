#include <stdio.h>

int EKUB(int a, int b){
    if(a % b == 0) return b;
    else return EKUB(b, a % b);
}

int EKUK(int a, int b){
    return a * b / EKUB(a, b);
}

int main(){
    printf("%d", EKUK(6, 8));
    return 0;
}