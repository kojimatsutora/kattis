#include<stdio.h>

int main() {
    int h,m;

    scanf("%d %d",&h,&m);

    if(m<45&&h>0) {
        m=m+15;
        h=h-1;
        printf("%d %d",h,m);
    } else if(m<45&&h==0) {
        m=m+15;
        printf("23 %d",m);
    } else {
        m=m-45;
        h=h;
        printf("%d %d",h,m);
    }
    return 0;
}
