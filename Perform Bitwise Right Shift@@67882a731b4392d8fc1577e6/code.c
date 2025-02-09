#include <stdio.h>
int main() {
    int n,m;
    scanff("%d %d",&n,&m);
    printf("%d",n>>m);
    return 0;
}