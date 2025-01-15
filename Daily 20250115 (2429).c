#include <stdio.h>
#include <stdlib.h>

int countBits(int num){
    int b;
    for (b = 0; num != 0; num >>= 1)
        if (num & 01)
            b++;
    return b;
}

int minimizeXor(int num1, int num2) {
    unsigned b1, b2, pos = 0;

    b1 = countBits(num1);
    b2 = countBits(num2);
    if(b1==b2) return num1;
    else if(b1>b2) {
        for(int i = b1-b2; i > 0; i--) num1 &= (num1-1);
        return num1;
    }
    for(int i = b2-b1; i > 0; i--){
        while ((num1 >> pos) & 1) pos++;
        num1 |= (1 << pos);
    }
    return num1;
}

int main(void){
    printf("%d\n", minimizeXor(1, 12));
    return 0;
}