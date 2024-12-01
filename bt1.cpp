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


    int valueToAdd, addIndex;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &valueToAdd);
    printf("Nhap vi tri muon them (0 den %d): ", currentLength);
    scanf("%d", &addIndex);

   
    if (addIndex < 0 || addIndex > currentLength) {
        printf("Vi tri khong hop le!\n");
        return 1; 
    }

   
    if (addIndex < currentLength) {
        
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
    }
    
    arr[addIndex] = valueToAdd;

   
    currentLength++;

   
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
