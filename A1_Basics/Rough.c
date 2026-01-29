#include <stdio.h>

int main() {
    int value = 42;         // 1. Declare an integer variable
    int *ptr_to_value;      // 2. Declare an integer pointer

    ptr_to_value = &value;  // 3. Store the address of 'value' in the pointer

    // 4. Dereference the pointer to get the value
    int dereferenced_value = *ptr_to_value;

    printf("The value of 'value' is: %d\n", value);
    printf("The address of 'value' is: %p\n", &value);
    printf("The pointer 'ptr_to_value' holds the address: %p\n", ptr_to_value);
    printf("The dereferenced value (using *ptr_to_value) is: %d\n", dereferenced_value);

    // You can also use the dereference operator to modify the original value
    *ptr_to_value = 99;
    printf("The new value of 'value' is: %d\n", value);

    return 0;
}
