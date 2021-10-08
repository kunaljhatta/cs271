#include <stdio.h>

/* Ex.1: Return the larger value */
int max(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    } else {
    return a;
  }
    if (a == b) {
        return a;
    } else {
        return b;
    }

    /*Ex.2: Add [0..100] and return the sum */
   int add100() {
        int n, sum = 0;
        for (int n = 1; n <= 100; n++) {
            sum += n;
        }

        printf("%d", sum);
        return sum;
    }

    /* Ex .3 : Sum the elements in the array */
    int sum(int arr[], int n) {
        int k, sum = 0;

        for (int k = 0; k < n; k++)
            sum += arr[k];

        return sum;
    }

    /* Ex .4 : Find the largest element in the array */
    int largest(int arr[], int n) {
        int k;

        int max = arr[0];

        for (k = 1; k < n; k++)
            if (arr[k] > max)
                max = arr[k];

        return max;
    }

    /* Provided */
    int main() {
        // Exercise 1
        printf("Sum of 1..100 is %d\n", add100());

        // Exercise 2
        printf("The max of 12 and 20 is %d\n", max(12, 20));
        printf("The max of 37 and 14 is %d\n", max(37, 14));

        // Create an array and calculate its length n
        int arr[] = {12, 5, 7, 14, 8};
        int n = sizeof(arr) / sizeof(arr[0]);

        // Exercise 3
        printf("Sum of the array is %d\n", sum(arr, n));

        // Exercise 4
        printf("Largest element in the array is %d\n", largest(arr, n));

        return 0;
    }
}
