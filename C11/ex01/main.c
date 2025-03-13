#include <stdio.h>
#include <stdlib.h>

// Prototype for the ft_map function
int *ft_map(int *tab, int length, int(*f)(int));

// Test functions
int square(int n) {
    return n * n;
}

int increment(int n) {
    return n + 1;
}

int double_value(int n) {
    return n * 2;
}

int absolute_value(int n) {
    return n < 0 ? -n : n;
}

// Function to print an array
void print_array(int *array, int length, const char *name) {
    printf("%s: [", name);
    for (int i = 0; i < length; i++) {
        printf("%d", array[i]);
        if (i < length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    // Test case 1: Square transformation
    int original1[] = {1, 2, 3, 4, 5};
    int length1 = sizeof(original1) / sizeof(original1[0]);
    
    printf("Test Case 1: Square Transformation\n");
    print_array(original1, length1, "Original Array");
    
    int *result1 = ft_map(original1, length1, square);
    if (result1) {
        print_array(result1, length1, "Transformed Array");
        free(result1);
    } else {
        printf("Transformation failed\n");
    }
    printf("\n");

    // Test case 2: Increment transformation
    int original2[] = {5, 3, 9, 2, 7};
    int length2 = sizeof(original2) / sizeof(original2[0]);
    
    printf("Test Case 2: Increment Transformation\n");
    print_array(original2, length2, "Original Array");
    
    int *result2 = ft_map(original2, length2, increment);
    if (result2) {
        print_array(result2, length2, "Transformed Array");
        free(result2);
    } else {
        printf("Transformation failed\n");
    }
    printf("\n");

    // Test case 3: Double transformation
    int original3[] = {10, 20, 30, 40, 50};
    int length3 = sizeof(original3) / sizeof(original3[0]);
    
    printf("Test Case 3: Double Transformation\n");
    print_array(original3, length3, "Original Array");
    
    int *result3 = ft_map(original3, length3, double_value);
    if (result3) {
        print_array(result3, length3, "Transformed Array");
        free(result3);
    } else {
        printf("Transformation failed\n");
    }
    printf("\n");

    // Test case 4: Absolute value transformation
    int original4[] = {-5, 3, -9, 2, -7};
    int length4 = sizeof(original4) / sizeof(original4[0]);
    
    printf("Test Case 4: Absolute Value Transformation\n");
    print_array(original4, length4, "Original Array");
    
    int *result4 = ft_map(original4, length4, absolute_value);
    if (result4) {
        print_array(result4, length4, "Transformed Array");
        free(result4);
    } else {
        printf("Transformation failed\n");
    }
    printf("\n");

    // Test case 5: Mixed values
    int original5[] = {-1, 0, 1, -2, 3, -4};
    int length5 = sizeof(original5) / sizeof(original5[0]);
    
    printf("Test Case 5: Square Transformation with Mixed Values\n");
    print_array(original5, length5, "Original Array");
    
    int *result5 = ft_map(original5, length5, square);
    if (result5) {
        print_array(result5, length5, "Transformed Array");
        free(result5);
    } else {
        printf("Transformation failed\n");
    }
    printf("\n");

    return 0;
}
