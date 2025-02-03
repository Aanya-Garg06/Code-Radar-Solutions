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
    else if(n==m){
    printf("No Profit No Loss");
    }
    return 0;
}