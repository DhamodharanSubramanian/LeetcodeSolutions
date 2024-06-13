int findDuplicate(int* nums, int numsSize) {
    int dup;
    int *tmp_arr = malloc(numsSize*sizeof(int));
    memset(tmp_arr, -1, numsSize*sizeof(int));
    int arr_index;

    /* Traverse the given array and check in the tmp arr index */
    for(int i=0; i <numsSize; i++)
    {
        arr_index = nums[i];
        if(tmp_arr[arr_index-1] != 0)
        {
            /* Check in */
            tmp_arr[arr_index-1] = 0;
        }
        else
        {
            /* Duplicate found */
            dup = arr_index;
            break;
        }
    }

    return dup;
}