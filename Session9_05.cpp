#include <stdio.h>
#include <stdbool.h>

// Ham kiem tra so nguyen to
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int arr[100];
    int length = 0;
    int choice;

    while (1) {
        // Menu
        printf("\nMENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Chuong trinh ket thuc.\n");
            break;
        }

        switch (choice) {
            case 1: {
                printf("Nhap so luong phan tu: ");
                scanf("%d", &length);
                for (int i = 0; i < length; i++) {
                    printf("Nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2: {
                printf("Mang: ");
                for (int i = 0; i < length; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }
            case 3: {
                int sum = 0;
                printf("Cac phan tu chan: ");
                for (int i = 0; i < length; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                if (length == 0) {
                    printf("Mang rong.\n");
                    break;
                }
                int max = arr[0];
                int min = arr[0];
                for (int i = 1; i < length; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                    if (arr[i] < min) {
                        min = arr[i];
                    }
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
                break;
            }
            case 5: {
                int sum = 0;
                printf("Cac phan tu la so nguyen to: ");
                for (int i = 0; i < length; i++) {
                    if (isPrime(arr[i])) {
                        printf("%d ", arr[i]);
                        sum += arr[i];
                    }
                }
                printf("\nTong cac phan tu la so nguyen to: %d\n", sum);
                break;
            }
            case 6: {
                int number, count = 0;
                printf("Nhap vao mot so: ");
                scanf("%d", &number);
                for (int i = 0; i < length; i++) {
                    if (arr[i] == number) {
                        count++;
                    }
                }
                printf("So luong phan tu co gia tri %d trong mang: %d\n", number, count);
                break;
            }
            case 7: {
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
            }
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

