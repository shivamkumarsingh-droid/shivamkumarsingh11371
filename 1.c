#include <stdio.h>

// Step 5: Function to calculate total bill
float calculateTotal(float prices[], int qty[], int size) {
    float total = 0;
    
    // Step 6: Multiply price with quantity and add
    for (int i = 0; i < size; i++) {
        total += prices[i] * qty[i];
    }
    
    // Step 7: Return total
    return total;
}

int main() {
    // Step 1: Store prices in an array
    float prices[3] = {50.0, 30.0, 20.0};
    int quantities[3];
    int i;
    
    // Step 2: Display menu
    printf("---- MENU ----\n");
    printf("1. Burger  - Rs %.2f\n", prices[0]);
    printf("2. Pizza   - Rs %.2f\n", prices[1]);
    printf("3. Coffee  - Rs %.2f\n", prices[2]);
    
    // Step 3 & 4: Ask quantity and store in array
    for (i = 0; i < 3; i++) {
        printf("Enter quantity for item %d: ", i + 1);
        scanf("%d", &quantities[i]);
    }
    
    // Step 8 & 9: Call function and store returned value
    float totalBill = calculateTotal(prices, quantities, 3);
    
    // Step 10: Display total bill
    printf("\nTotal Bill Amount = Rs %.2f\n", totalBill);
    
    return 0;
}
