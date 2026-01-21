int addDigits(int num) {
    
    while(num>=10){
        
        // sum必须初始化，不然会是一个很大的数字
        // sum需要放到第一个循环里面，因为每次需要重新加和而非在上一次的基础上加
        int sum = 0;
        while(num>0){
            sum += num%10;
            num /= 10;
        }
        num = sum;
    }

    // 因为sum在第一个循环里面，所以要return num而非sum
    return num;
}