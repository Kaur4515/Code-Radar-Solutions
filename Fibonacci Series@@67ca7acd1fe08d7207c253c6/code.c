int fibonacciSeries(int a){
    int first = 0 , second = 1 ;
    for(int i = 0 ; i < a ; i++){
        printf("%d ",first);
        int result = first + second;
        first = second ;
        second = result;
    }
}