int pivotIndex(int* nums, int numsSize){
    int left = 0, sum = 0;
    /*
    //Handle edge case, even though it doesn't influence correctness.
    if (!numsSize)
        return -1;
    if (numsSize == 1)
        return nums[0];*/
    //Sum up all array.
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
    }
    //Comare left and right value of pivot.
    for(int i = 0; i < numsSize; i++){
        if (left == (sum - left - nums[i]))
            return i;
        left += nums[i];
    }
    return -1;
}