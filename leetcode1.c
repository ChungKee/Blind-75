int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* temp = NULL;
    *returnSize = 0;
    for(int i = 0; i < numsSize; i++){
        for(int j = i + 1; j < numsSize; j++){
            if(nums[i] + nums[j] == target){
                *returnSize = 2;
                temp = (int*)malloc(sizeof(int) * 2);
                temp[0] = i;
                temp[1] = j;
                break;
            }
        }
    }
    return temp;
}
