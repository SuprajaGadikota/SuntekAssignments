#include <stdio.h>
int search(int* nums, int numsSize, int target){
    int mid,low,high;
    low =0;
    high=numsSize-1;
    while (high>=low) {
        mid=low+(high-low)/2;
        if(nums[mid]==target){
           return mid;
        }
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<nums[mid]){
                high=mid-1;
            }else {
                low=mid+1;
            }
        }
        else{
            if (nums[mid] < target && target <= nums[high]){
                low=mid+1;                
            }else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n,arr[50],pivot,target;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pivot);
    scanf("%d",&target);
    if(pivot>0 && pivot<7){
        for(int i=pivot;i<=n-1;i++){
            printf("%d\t",arr[i]);
        }
        for(int i=0;i<=pivot-1;i++){
            printf("%d\t",arr[i]);
        }
    }
    int index=search(arr,n,target);
    printf("%d",index);
}
