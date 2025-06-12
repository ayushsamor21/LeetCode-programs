int removeElement(int* nums, int numsSize, int value) {
    int i = 0, j = 0;
    while(i < numsSize) {
        if(nums[i] != value) {
            nums[j++] = nums[i];
        }
        i++;
    }
    return j;
}
