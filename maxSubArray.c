#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int sum = 0;
    int maxSum = nums[0];
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];

        if (sum > maxSum) {
            maxSum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }

    }

    printf("%d", maxSum);
}


// -1 2 4 -1 3 -2 4
// 


int main() {
    int nums[2] = {-1, 0};
    maxSubArray(nums, 2);
}