#include <stdio.h>

int main() {
    int arr[50], i, n, max_element, min_element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    
    max_element = arr[0];
    min_element = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }

    printf("The max value in the array is %d and the min value in the array is %d\n",
           max_element, min_element);

    return 0;
}
