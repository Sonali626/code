
#include <stdio.h>

int Binary_search(int A[], int begin, int end, int key) {
   if (begin <= end) {
        int mid = begin + (end-begin) / 2;

        if (A[mid] == key)
            return mid;
        else if (A[mid] > key)
            return Binary_search(A, begin, mid - 1, key);
        else
            return Binary_search(A, mid + 1, end, key);
   }
    return -1;
}

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 10;
    int z = Binary_search(A, 0, 9, key); // Pass array name, not A[10]

    if (z == -1)
        printf("Key is not found\n");
    else
        printf("Key is found at index %d\n", z);

return 0;
}