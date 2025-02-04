#include <stdio.h>
int main() {
    int a;
    int c;
    scanf("%d %d",&a,&c);
    if (c*c==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}