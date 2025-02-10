#include <stdio.h>
int main() {
    int a , b;
    char c;
    if (scanf("%d%d %c",&a,&b,&c) !=3){
        printf("error");
        return 1;
    }
    switch (c){
        case '+': printf("%d",a+b);
        break;
        case '-': printf("%d",a-b);
        break;
        case '*': printf("%d",a*b);
        break;
        case '/': printf("%d",a/b);
        break;
        default : printf("Invalid");
    }
    return 0;
}