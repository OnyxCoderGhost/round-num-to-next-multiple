#include <stdio.h>

int main(){
    int roundUp, base;
    scanf("%d %d", &roundUp, &base);
    
    int multiple = base;
    int quotient = roundUp/base;
    int remainder = roundUp % base;
    
    if (remainder >= base/2){
        quotient += 1;
    }
    
    multiple = quotient * base;
    
    printf("%d", multiple);
    
    return 0;
}