#include <stdio.h>
int maxProduct(int* nums, int numsSize){
    int max = nums[0],product;
    for (int i=0;i<numsSize;i++) {
           product = nums[i];
        if (product >= max) {
            max = product;
            for (int j = i+1; j<numsSize;j++) {
                product =product*nums[j];
                if(product >= max) {
                    max =product;
                }
            }
        }
    }
    printf("%d",max);
   }
int main()
{   
    int n,arr[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxProduct(arr,n);
    return 0;
}
