int majorityElement(int* nums, int numsSize){
    int num=arr[0];
    int numCount=1;
    for(int i=0;i<numsSize;i++){
        if(arr[i]==num){
            ++numcounnt;
        }else{
            --numcount;
        }
        if(numCount==0){
            num=arr[i];
            numCount=1;
        }
    }
    return num;
}
