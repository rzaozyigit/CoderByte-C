#include <stdio.h>

void SecondGreatLow(int arr[], int size) {
    if (size < 2) {
        printf("Array must contain at least 2 numbers.\n");
        return;
    }

    int min = arr[0];
    int max = arr[0];
	int i;
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            max = min;
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }

    int secondMin = max;
    int secondMax = min;
    for (i = 0; i < size; i++) {
        if (arr[i] != min && arr[i]  < secondMin) {
            secondMin = arr[i];
        }
        if (arr[i] != max && arr[i] > secondMax) {
            secondMax = arr[i];
        } 
    }

    printf("%d %d\n", secondMin, secondMax);
}

int main() {
    int arr1[] = {7, 7, 12, 98, 106};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    SecondGreatLow(arr1, size1); // Output: 12 98

    int arr2[] = {1, 42, 42, 180};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    SecondGreatLow(arr2, size2); // Output: 42 42

    int arr3[] = {4, 90};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    SecondGreatLow(arr3, size3); // Output: 90 4
	
	int arr4[] = {9, 12, 23, 60, 96};
    int size4 = sizeof(arr4) / sizeof(arr3[0]);
    SecondGreatLow(arr4, size4); // Output: 12  60
    
    return 0;
}

