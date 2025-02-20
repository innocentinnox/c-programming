#include <stdio.h>

int findMax(int nums[], int len){
    int max = nums[0];
    for(int i = 0; i < len; i++){
        max = (nums[i]>max) ? nums[i] : max;
    }
    return max;
}

int main(){
    int nums[] = {10,6,8};
    int len = sizeof(nums)/sizeof(nums[0]);
    int max = findMax(nums, len);
    printf("Max: %d\n", max);
    return 0;
}