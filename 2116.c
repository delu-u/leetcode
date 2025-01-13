#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char* s){
    int c = 0;
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]==')') c--;
        else c++;
    }
    return c == 0;
}

bool canBeValid(char* s, char* locked) {
    int n = strlen(s);
    char* c = malloc((n+1)*sizeof(char));
    if(!n%2) return false;
    if(isValid(s)) return true;
    if(s[0]==')' && locked[0]=='1') return false;
    else c[0] = '(';
    for(int i = 1; s[i+1]!='\0'; i++){
        if(locked[i]=='1') continue;
        switch (s[i]){
        case '(':
            if(s[i+1]==')' || (i<n/2 && s[n-(i+1)]==))
            break;
        
        default:
            break;
        }
    }
    
}

//unfinished
int main(void){
    canBeValid("))()))", "010100");
    return 0;
}