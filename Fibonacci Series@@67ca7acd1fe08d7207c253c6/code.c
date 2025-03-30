#include <stdio.h>
int fibonacci(int a){
    int count;
    int set = 0 + 1; 
    while(a){
        count++;
        a /= 10; 
        int result = a + set;
    }
    return (result);
}

int main(){
    int n; 
    scanf("%d",&n);
    if (n<=0){
    printf("Invalid input\n");
    return 0;
    }
    int done = fibonacci(n);
    printf("%d",done);
return 0; 
}