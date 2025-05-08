int removeElement(int* nums, int numsSize, int val) {
    int ret_val = 0;

    unsigned int i, j;

    for (i = 0, j = 0; i < numsSize; i++) 
    {
        if (nums[i] != val) 
        {
            nums[j++] = nums[i];
            ret_val++;
        }
    }

    return ret_val;
    
}