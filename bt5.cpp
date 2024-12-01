#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100 // Maximum array size

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true; 


    int main(){
    int arr[MAX_SIZE];
    int currentLength = 0;
    int choice;

    do {
        // Display menu
        printf("MENU\n");
        printf("1. Enter the number of elements and their values\n");
        printf("2. Print the values of the elements\n");
        printf("3. Print even elements and their sum\n");
        printf("4. Print the maximum and minimum values\n");
        printf("5. Print prime elements and their sum\n");
        printf("6. Count occurrences of a given number\n");
        printf("7. Insert an element at a specified position\n");
        printf("8. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements (max %d): ", MAX_SIZE);
                scanf("%d", &currentLength);
                if (currentLength < 0 || currentLength > MAX_SIZE) {
                    printf("Invalid number of elements!\n");
                    currentLength = 0;
                } else {
                    for (int i = 0; i < currentLength; i++) {
                        printf("Enter element %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }
                break;

            // ... (other cases remain the same)

            case 7:
                if (currentLength == MAX_SIZE) {
                    printf("Array is full!\n");
                } else {
                    int position, value;
                    printf("Enter the position to insert (0 to %d): ", currentLength);
                    scanf("%d", &position);
                    if (position < 0 || position > currentLength) {
                        printf("Invalid position!\n");
                    } else {
                        printf("Enter the value to insert: ");
                        scanf("%d", &value);
                        // Shift elements to the right
                        for (int i = currentLength; i > position; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[position] = value;
                        currentLength++;
                        printf("Element inserted successfully!\n");
                    }
                }
                break;

            case 8:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 8);

    return 0;
}
