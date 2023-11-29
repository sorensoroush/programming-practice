#include <stdio.h>

int main() {
    int nums[5] = {5,2,6,8,1};
    printf("\n");
    printf("Content of nums[0] (nums[0]): %d\n", nums[0]);
    printf("Content of nums[0] (*nums): %d\n", *nums);
    printf("Address of nums[0] (nums): %d\n", nums);
    printf("Address of nums[0] (&nums[0]): %d\n", &nums[0]);
    printf("Content of nums[1] (nums[1]): %d\n", nums[1]);
    printf("Content of nums[1] (*(nums + 1)): %d\n", *(nums + 1));
    printf("Address of nums[1] (nums + 1): %d\n", nums + 1);
    printf("Address of nums[1] (&nums[1]): %d\n", &nums[1]);
    printf("Content of nums[2] (nums[2]): %d\n", nums[2]);
    printf("Content of nums[2] (*(nums + 2)): %d\n", *(nums + 2));
    printf("Address of nums[2] (nums + 2): %d\n", nums + 2);
    printf("Address of nums[2] (&nums[2]): %d\n", &nums[2]);
    printf("Content of nums[3] (nums[3]): %d\n", nums[3]);
    printf("Content of nums[3] (*(nums + 3)): %d\n", *(nums + 3));
    printf("Address of nums[3] (nums + 3): %d\n", nums + 3);
    printf("Address of nums[3] (&nums[3]): %d\n", &nums[3]);
    printf("Content of nums[4] (nums[4]): %d\n", nums[4]);
    printf("Content of nums[4] (*(nums + 4)): %d\n", *(nums + 4));
    printf("Address of nums[4] (nums + 4): %d\n", nums + 4);
    printf("Address of nums[4] (&nums[4]): %d\n", &nums[4]);
    // /*
    printf("Content of nums[5] (nums[5]): %d\n", nums[5]);
    printf("Content of nums[5] (*(nums + 5)): %d\n", *(nums + 5));
    printf("Address of nums[5] (nums + 5): %d\n", nums + 5);
    printf("Address of nums[5] (&nums[5]): %d\n", &nums[5]);
    // */
    printf("\n");
}