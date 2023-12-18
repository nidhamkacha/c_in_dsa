#include <stdio.h>

int binarysearch(int a[], int low, int high, int ele) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (a[mid] == ele) {
            return mid;
        }
        if (a[mid] > ele) {
            return binarysearch(a, low, mid - 1, ele);
        }
        return binarysearch(a, mid + 1, high, ele);
    }
    return -1;
}

int main() {
    int arr[6] = {5, 10, 15, 20, 25, 30};
    int size = 6;
    int find = 25;
    int res = binarysearch(arr, 0, size - 1, find);

    if (res == -1) {
        printf("Element %d not found", find);
    } else {
        printf("Element %d found at %d index", find, res+1);
    }
    return 0;
}
