#include <stdio.h>
int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if (n==m && m==l){
        printf("Equilateral");
    }
    else if (n==m && m!=l)||(m==l && l!=m){
        printf("Isosceles");
    }
    else
    printf("Scalene");
    return 0;
}