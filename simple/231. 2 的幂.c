bool isPowerOfTwo(int n) {
    return n>0 && (n & (n-1)) ==0;
}

// 二进制中2的幂一定是1000……的形式，-1一定是01111……的形式，利用或与非进行求解