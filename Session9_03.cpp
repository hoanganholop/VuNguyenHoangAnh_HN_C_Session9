#include <stdio.h>

int main() {
    int arr[100]; 
    int n, currentLength; 
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    currentLength = n; 
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang ban dau:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int deleteIndex;
    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le.\n");
        return 1; 
    }


    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--; 
    printf("Mang sau khi xoa:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

