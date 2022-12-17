int findDuplicate(int* nums, int numsSize){
    int arr[numsSize-1];
    for(int i=0;i<numsSize-1;i++){
        arr[i]=0;
    }
    for(int i=0;i<=numsSize;i++){
        arr[nums[i]-1]+=1;
        if(arr[nums[i]-1]>1)
            return nums[i];
    }
    return 0;
}
