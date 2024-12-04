#include <stdio.h>

int main() {
    int arr[100][100];
    int rows, cols;
    int choice;

    while (1) {
        // Menu
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Chuong trinh ket thuc.\n");
            break;
        }

        switch (choice) {
            case 1: 
                printf("Nhap so dong: ");
                scanf("%d", &rows);
                printf("Nhap so cot: ");
                scanf("%d", &cols);
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("Nhap gia tri phan tu arr[%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            
            case 2: 
                printf("Gia tri cua mang theo ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            
            case 3: 
                int sum = 0;
                printf("Cac phan tu la le: ");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sum);
                break;
            
            case 4: 
                int product = 1;
                printf("Cac phan tu nam tren duong bien: ");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
                break;
            
            case 5: 
                printf("Cac phan tu nam tren duong cheo chinh: ");
                for (int i = 0; i < rows; i++) {
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            
            case 6: 
                printf("Cac phan tu nam tren duong cheo phu: ");
                for (int i = 0; i < rows; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
                break;
            
            case 7: 
                int maxRow = 0, maxSum = 0;
                for (int i = 0; i < rows; i++) {
                    int sum = 0;
                    for (int j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                    if (sum > maxSum) {
                        maxSum = sum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong gia tri cac phan tu lon nhat la dong thu %d voi tong %d\n", maxRow + 1, maxSum);
                break;
            
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }

    return 0;
}

