#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<=n-1 ; j++){
            printf("*");
        }
        for(int k = 1;k<n-2 ; k++ ){
            printf(" ");
        }
    printf("\n");
    }
    return 0 ;
}