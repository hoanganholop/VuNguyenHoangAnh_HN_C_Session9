#include <stdio.h>

int main() {
    int arr[100];
    int length = 0;
    int choice;

    while (1) {
        // Menu
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Chuong trinh ket thuc.\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &length);
                for (int i = 0; i < length; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("Mang: ");
                for (int i = 0; i < length; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                if (length >= 100) {
                    printf("Mang da day. Khong the them phan tu.\n");
                    break;
                }
                int value, position;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them (0 den %d): ", length);
                scanf("%d", &position);
                if (position < 0 || position > length) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = length; i > position; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[position] = value;
                length++;
                break;
            case 4:
                printf("Nhap vi tri can sua (0 den %d): ", length - 1);
                scanf("%d", &position);
                if (position < 0 || position >= length) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[position] = value;
                break;
            case 5:
                printf("Nhap vi tri can xoa (0 den %d): ", length - 1);
                scanf("%d", &position);
                if (position < 0 || position >= length) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = position; i < length - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                length--;
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

