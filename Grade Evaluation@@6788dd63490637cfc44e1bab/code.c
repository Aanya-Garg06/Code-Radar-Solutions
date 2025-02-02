#include <stdio.h>
int main() {
    char n;
    scanf("%c",n);
    if (n==A){
        printf("Excellent\n");
    }
    else if(n==B){
        printf("Good\n");
    }
    else if(n==C){
        printf("Average\n");
    }
    else if(n==D){
        printf("Below Average\n");
    }
    else if(n==F){
        printf("Fail\n");
    }
    else
    printf("Invalid\n");
    return 0;
}