#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int currentLength) {
    printf("Mang hien tai:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0; 
    int choice; 

    do {
        
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap so phan tu (toi da %d): ", MAX_SIZE);
                scanf("%d", &currentLength);
                if (currentLength < 0 || currentLength > MAX_SIZE) {
                    printf("So phan tu khong hop le!\n");
                    currentLength = 0; 
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Nhap phan tu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;

            case 2: 
                if (currentLength == 0) {
                    printf("Mang rong!\n");
                } else {
                    displayArray(arr, currentLength);
                }
                break;

            case 3: 
                if (currentLength < MAX_SIZE) {
                    int valueToAdd, addIndex;
                    printf("Nhap gia tri muon them: ");
                    scanf("%d", &valueToAdd);
                    printf("Nhap vi tri muon them (0 den %d): ", currentLength);
                    scanf("%d", &addIndex);

                    if (addIndex < 0 || addIndex > currentLength) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = currentLength; i > addIndex; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[addIndex] = valueToAdd;
                        currentLength++;
                    }
                } else {
                    printf("Khong the them phan tu, mang da day!\n");
                }
                break;

            case 4: 
                if (currentLength == 0) {
                    printf("Mang rong! Khong the sua!\n");
                } else {
                    int index, newValue;
                    printf("Nhap vi tri can sua (0 den %d): ", currentLength - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= currentLength) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        printf("Nhap gia tri moi: ");
                        scanf("%d", &newValue);
                        arr[index] = newValue;
                    }
                }
                break;

            case 5:
                if (currentLength == 0) {
                    printf("Mang rong! Khong the xoa!\n");
                } else {
                    int deleteIndex;
                    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
                    scanf("%d", &deleteIndex);
                    if (deleteIndex < 0 || deleteIndex >= currentLength) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = deleteIndex; i < currentLength - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        currentLength--;
                    }
                }
                break;

            case 6: 
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}
