int searchInsert(int* nums, int numsSize, int target) {

    unsigned int i;

    for(i = 0; i < numsSize ; i++)
    {
        if(nums[i] >= target)
            break;
    }
    
    return i;
}