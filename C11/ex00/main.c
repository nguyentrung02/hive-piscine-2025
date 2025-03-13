#include <stdio.h>

void print_number(int n) {
    printf("%d\n", n);
}

void ft_foreach(int *tab, int length, void(*f)(int));

int main() {
    // Test 1: Multiple elements in correct order
    int arr1[] = {3, 1, 2};
    ft_foreach(arr1, 3, &print_number);
        
    // Test2: Empty array (no elements processed)
    ft_foreach(NULL, 0, &print_number);

    // Test 3: Single element
    int arr3[] = {42};
    ft_foreach(arr3, 1, &print_number);

    // Test 4: Negative numbers and zero
    int arr4[] = {-5, 0, 5};
    ft_foreach(arr4, 3, &print_number);

    printf("All tests passed!\n");
    return 0;
}
