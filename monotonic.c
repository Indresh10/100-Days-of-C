#include<stdio.h>

bool getInr(int* nums, int numsSize){
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]<nums[i+1]) return true;
        else if(nums[i]>nums[i+1]) return false;
    }
    return false;
}
bool isMonotonic(int* nums, int numsSize){
    bool increase = getInr(nums,numsSize);
    for(int i=0;i<numsSize-1;i++){
        if(increase){
            if(nums[i]>nums[i+1]) return false;
        }else{
            if(nums[i]<nums[i+1]) return false;
        }
    }
    return true;
}
