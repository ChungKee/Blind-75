
#define max(a,b) ((a) > (b) ? (a):(b))

int maxSubArray(int* nums, int numsSize){
    int temp_max = nums[0];
    int final_max = nums[0];
    for(int i = 1; i < numsSize; i++){
        temp_max = max(temp_max + nums[i], nums[i]);
        final_max = max(final_max,temp_max);
    }
    return final_max;
}
