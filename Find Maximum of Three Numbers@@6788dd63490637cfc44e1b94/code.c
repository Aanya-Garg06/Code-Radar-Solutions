#include <stdio.h>
int main() {
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    if (n>m && n>l){
        printf("%d",n);
    }
    else if (m>n && m>l){
        printf("%d",m);
    }
    else
    printf("%d",l);
    return 0;
}