#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index, newValue;
    printf("Mang ban dau:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap vi tri can sua (0 den %d): ", n - 1);
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    if (index < 0 || index >= n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }
    arr[index] = newValue;
    printf("Mang sau khi sua:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

