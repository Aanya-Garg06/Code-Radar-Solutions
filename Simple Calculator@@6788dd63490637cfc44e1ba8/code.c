#include <stdio.h>
int main() {
    int n,m;
    char l;
    scanf("%d %d %c",&n,&m,&l);
    if (l=='+'){
        printf("%d",n+m);
    }
    else if(l=='-'){
        printf("%d",n-m);
    }
    else if(l=='/'){
        printf("%d",n/m);
    }
    else if(l=='*'){
        printf("%d",n*m);
    }
    return 0;
}