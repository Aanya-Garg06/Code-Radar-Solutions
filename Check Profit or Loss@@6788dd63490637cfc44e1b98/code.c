#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if (n<m){
        printf("Profit");
    }
    else if (n>m){
        printf("Loss");
    }
    else
    printf("NO Profit No loss");
    return 0;
}