int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int *newArr=malloc(numsSize * sizeof(int));
    int left = 0;
    int right = numsSize-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]%2==0){
            newArr[left]=nums[i];
            left++;
        }else{
            newArr[right]=nums[i];
            right--;
        }
    }
    *returnSize=numsSize;
    return newArr;
}