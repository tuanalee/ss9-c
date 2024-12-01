#include <stdio.h>

#define MAX_SIZE 100 

int main() {
    int arr[MAX_SIZE];
    int currentLength = 0; 
    int numElements; 

   
    printf("Nhap so phan tu ban dau (toi da %d): ", MAX_SIZE);
    scanf("%d", &numElements);

    
    if (numElements < 0 || numElements > MAX_SIZE) {
        printf("So phan tu khong hop le!\n");
        return 1; 
    }

   
    for (int i = 0; i < numElements; i++) {
        printf("Nhap phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    currentLength = numElements; 

    
    printf("Mang ban dau:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    int deleteIndex;
    printf("Nhap vi tri can xoa (0 den %d): ", currentLength - 1);
    scanf("%d", &deleteIndex);

   
    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
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
