/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {

    // 注释写了要malloced……
    double* ans = (double*)malloc(2* sizeof(double));
    
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 +32.00;

    //需要向评测系统说明返回数组的长度
    *returnSize = 2;

    return ans;
}
