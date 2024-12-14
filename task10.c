#include <stdio.h>

int POW(int n, int p){
    int power = 1;
    for(int i = 0; i < p; i++){
        power *= n;
    }
    return power;
}

int main(){
    printf("%d", POW(2, 3));
    return 0;
}