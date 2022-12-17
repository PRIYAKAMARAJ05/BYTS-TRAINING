int majorityElement(int* nums, int numsSize){
    int num=nums[0];
    int numCount=1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==num){
            ++numCount;
        }else{
            --numCount;
        }
        if(numCount==0){
            num=nums[i];
            numCount=1;
        }
    }
    return num;
}
