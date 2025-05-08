int removeDuplicates(int* nums, int numsSize) {
    int ret_val = 1;

    unsigned int i, j;

    for (i = 1, j = 0; i < numsSize; i++) 
    {
        if (nums[i] > nums[j]) 
        {
            j++;
            nums[j] = nums[i];
            ret_val++;
        }
    }

    return ret_val;
}