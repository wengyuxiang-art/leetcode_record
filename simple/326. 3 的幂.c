bool isPowerOfThree(int n) {
    if(n<=0) return false;
    
    //幂次不是倍数，需要根据除到最后商是否为1判断幂次
    while(n%3==0){
        n/=3;
    }

    //返回判断结果
    return n==1;
}