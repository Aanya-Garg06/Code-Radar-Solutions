#include <stdio.h>
int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if (n==m && m==l && n==l){
        printf("Equilateral");
    }
    else if (n==m && m!=n && n!=l){
        printf("Isosceles");
    }
    else if (n!=m && m!=l && n!=l){
    printf("Scalene");
    }
    return 0;
}