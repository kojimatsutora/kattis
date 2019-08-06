#include <stdio.h>

int main() {
    int n,i,repeat=1,point;

    scanf("%d",&n);

    for(i=1; i<=n; i++) {
        repeat=2*repeat;
    }
    point=(repeat+1)*(repeat+1);
    printf("%d",point);
    return 0;
}
