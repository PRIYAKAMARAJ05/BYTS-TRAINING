void sortColors(int* nums, int numsSize){
    int adj=0,co=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)
            ++adj;
        if(nums[i]==1)
            ++co;    
    }
    for(int i=0;i<adj;i++)
        nums[i]=0;
    for(int i=adj;i<adj+co;i++)
        nums[i]=1;
    for(int i=adj+co;i<numsSize;i++)
        nums[i]=2;
}
