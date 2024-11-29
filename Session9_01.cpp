#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength;
    printf("Nhap so phan tu muon nhap: ");
    scanf("%d", &n);

    currentLength = n;
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Mang ban dau la:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int value, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0 den %d): ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > 99) {
        printf("Vi tri khong hop le\n");
        return 1;
    }
    if (addIndex >= currentLength) {
        arr[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = value;
        currentLength++;
    }
    printf("Mang sau khi them la:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

