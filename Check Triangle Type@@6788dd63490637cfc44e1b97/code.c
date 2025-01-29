#include <stdio.h>
int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if (n==m && m==l){
        printf("Equilateral");
    }
    if (n==m && m!=n){
        printf("Isosceles");
    }
    else
    printf("Scalene");
    return 0;
}