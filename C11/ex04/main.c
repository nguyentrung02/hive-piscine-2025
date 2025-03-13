#include <stdio.h>

// Comparison functions
int sort(int a, int b) { return (a - b); }

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int main() {
    int result;
    int *empty = NULL;
    int test_count = 0;
    int passed = 0;

    // Test 1: Empty array
    result = ft_is_sort(empty, 0, sort);
    printf("Test %d: Empty array\t\t%s\n", ++test_count, result == 1 ? "PASS" : "FAIL");
    passed += (result == 1);

    // Test 2: Single element
    int single[] = {42};
    result = ft_is_sort(single, 1, sort);
    printf("Test %d: Single element\t\t%s\n", ++test_count, result == 1 ? "PASS" : "FAIL");
    passed += (result == 1);

    // Test 3: Sorted ascending
    int sorted_asc[] = {1, 2, 3, 4, 5};
    result = ft_is_sort(sorted_asc, 5, sort);
    printf("Test %d: Sorted ascending\t%s\n", ++test_count, result == 1 ? "PASS" : "FAIL");
    passed += (result == 1);

    // Test 4: Sorted descending
    int sorted_desc[] = {5, 4, 3, 2, 1};
    result = ft_is_sort(sorted_desc, 5, sort);
    printf("Test %d: Sorted descending\t%s\n", ++test_count, result == 1 ? "PASS" : "FAIL");
    passed += (result == 1);

    // Test 5: Unsorted array
    int unsorted[] = {1, 3, 2, 4, 5};
    result = ft_is_sort(unsorted, 5, sort);
    printf("Test %d: Unsorted array\t\t%s\n", ++test_count, result == 0 ? "PASS" : "FAIL");
    passed += (result == 0);

    // Test 6: All equal values
    int equal[] = {7, 7, 7, 7};
    result = ft_is_sort(equal, 4, sort);
    printf("Test %d: All equal values\t%s\n", ++test_count, result == 1 ? "PASS" : "FAIL");
    passed += (result == 1);
/*
    // Test 7: Wrong order type check
    int mixed[] = {5, 4, 3, 2, 1};
    result = ft_is_sort(mixed, 5, sort);
    printf("Test %d: Wrong order check\t%s\n", ++test_count, result == 0 ? "PASS" : "FAIL");
    passed += (result == 0);
*/
    // Test 8: First element wrong
    int first_bad[] = {5, 2, 3, 4, 1};
    result = ft_is_sort(first_bad, 5, sort);
    printf("Test %d: First element wrong\t%s\n", ++test_count, result == 0 ? "PASS" : "FAIL");
    passed += (result == 0);

    // Test 9: Last element wrong
    int last_bad[] = {1, 2, 3, 5, 4};
    result = ft_is_sort(last_bad, 5, sort);
    printf("Test %d: Last element wrong\t%s\n", ++test_count, result == 0 ? "PASS" : "FAIL");
    passed += (result == 0);

    printf("\nFinal result: %d/%d tests passed\n", passed, test_count);
    return 0;
}
