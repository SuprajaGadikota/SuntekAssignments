#include<stdio.h>
int main() {
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
    return max;
   }
}
