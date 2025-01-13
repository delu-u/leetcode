#include <stdio.h>

int romanToInt(char* s) {
    int out = 0;

    for(int i = 0; s[i]!='\0'; i++){
        switch (s[i])
        {
        case 'M':
            out += 1000;
            break;

        case 'D':
            out += 500;
            break;
        
        case 'C':
            if(s[i+1] == 'D' || s[i+1] == 'M') out -= 100;
            else out += 100;
            break;

        case 'L':
            out += 50;
            break;
        
        case 'X':
            if(s[i+1] == 'L' || s[i+1] == 'C') out -= 10;
            else out += 10;
            break;

        case 'V':
            out += 5;
            break;
        
        case 'I':
            if(s[i+1] == 'V' || s[i+1] == 'X') out -= 1;
            else out += 1;
            break;
        
        default:
            break;
        }
    }
    
    return out;
}

int main(void){
    printf("%d\n", romanToInt("MCMXCIV"));
    return 0;
}