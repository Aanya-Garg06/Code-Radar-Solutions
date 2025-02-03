#include <stdio.h>
int main() {
    int n,m;
    if ((n>0) && (m>0)){
        printf("Same Sign");
    }
    else if ((n<0) && (m<0)){
        printf("Same Sign");
    }
    else 
    printf("Different Sign");
    return 0;
}