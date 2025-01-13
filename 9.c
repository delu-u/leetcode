#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {
    if(x<0) return false;
    if(x==0) return true;

    int n = floor(log10(x)) + 1;

    for(int i = 0; i<n; i++){
        if((((int)(x/pow(10, i)))%10) != (((int)(x/pow(10, n-1-i)))%10)) return false;
    }
    return true;

}

int main(void){
    printf("%d\n", isPalindrome(22));
    return 0;
}
