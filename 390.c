#include <stdio.h>
#include <math.h>

int lastRemaining(int n) {
    if(n==1) return 1;
    return 2*(1+n/2-lastRemaining(n/2));
}

int main(void){
    printf("%d\n", lastRemaining(64));
    return 0;
}