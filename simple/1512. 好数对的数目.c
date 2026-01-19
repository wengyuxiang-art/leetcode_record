int numIdenticalPairs(int* nums, int numsSize) {    
    
    int cnt = 0;

    //for条件里是；不是，
    //第一个条件是初始值，需要包含类型和初值
    for (int i=0; i<numsSize; i++){
        for (int j=0; j<numsSize; j++){
            if(nums[i] == nums[j] && i<j){
                cnt++;
            }
        }
    }

    return cnt;
}