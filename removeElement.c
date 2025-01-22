#include <stdio.h>

int removeElement(int* nums, int numsSize, int val) {
    int index = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[index] = nums[i];
            index++;
        }
    }
}

int main() {
int array[] = {3, 2, 2, 3, 1, 2};
removeElement(array, 6, 3);

for (int i = 0; i < 6; i++) {
    printf("%d,", array[i]);
}
}