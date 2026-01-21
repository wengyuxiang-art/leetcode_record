int subtractProductAndSum(int n) {
    
    //不需要像258一样while>10，因为不需要对结果再做拆分，只用拆分一次即可
    
    int a = 0;
    int sum=0;
    int time=1;
    
    //这里n>0而非>1，初始化的时候time赋1即可；
    while(n>0){
        sum += n%10;
        time *= n%10;
        n /= 10;
    }

    a = time-sum;
    
    return a;
}