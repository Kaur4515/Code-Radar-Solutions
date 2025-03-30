int fibonacciSeries(int a){
    int f = 0 , s = 1 , result;
    for(int i = 0 ; i< a ; i++){
        printf("%d ",f);
        result = f + s;
        f = s ;
        result = s;
    }
}