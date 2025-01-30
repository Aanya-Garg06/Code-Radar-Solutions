#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    printf("%s",(0<n<101)?,"In Range":"Out of Range");
    return 0;
}