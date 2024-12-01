#include <stdio.h>

#define MAX_SIZE 10 

int main() {
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int index, newValue;

    
    printf("Mang ban dau:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    printf("Nhap vi tri can sua (0 den %d): ", size - 1);
    scanf("%d", &index);

    
    if (index < 0 || index >= size) {
        printf("Vi tri khong hop le!\n");
        return 1; 
    }

    
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    
    arr[index] = newValue;

    
    printf("Mang sau khi sua:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
