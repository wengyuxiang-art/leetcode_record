// malloc 是对指针malloc
// 数组下标从0开始到n-1结束
// 最后需要告诉计算机读取的长度returnsize

int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int)*n*2);

    for(int i=0; i<n; i++){
        ans[2*i]=nums[i];
        ans[2*i+1]=nums[n+i];
    }

    *returnSize = 2*n; 

    return ans;
}