#include <stdio.h>
#include <string.h>

// Prototype for the ft_any function
int ft_any(char **tab, int (*f)(char *));

// Test functions
int contains_a(char *str) {
    return strchr(str, 'a') != NULL;
}

int is_empty(char *str) {
    return *str == '\0';
}

int starts_with_hello(char *str) {
    return strncmp(str, "hello", 5) == 0;
}

int complex_condition(char *str) {
    // String length is even and contains at least one digit
    int has_digit = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            has_digit = 1;
        }
    }
    return (strlen(str) % 2 == 0) && has_digit;
}

// Function to print test results
void print_test_result(int result, const char *test_name) {
    printf("%s: %s\n", test_name, result ? "Passed" : "Failed");
}

int main() {
    // Test case 1: Check if any string contains 'a'
    char *test1[] = {"apple", "banana", "cherry", "date", NULL};
    print_test_result(ft_any(test1, contains_a), "Test 1 (contains 'a')");

    // Test case 2: Check if any string is empty
    char *test2[] = {"", "non-empty", "another", NULL};
    print_test_result(ft_any(test2, is_empty), "Test 2 (is empty)");

    // Test case 3: Check if any string starts with "hello"
    char *test3[] = {"hi", "hello world", "hey", "hello", NULL};
    print_test_result(ft_any(test3, starts_with_hello), "Test 3 (starts with 'hello')");

    // Test case 4: Check complex condition (even length and contains digit)
    char *test4[] = {"abc1", "def", "gh2i", "jkl3", NULL};
    print_test_result(ft_any(test4, complex_condition), "Test 4 (complex condition)");

    // Test case 5: Edge case - empty array
    char *test5[] = {NULL};
    print_test_result(!ft_any(test5, contains_a), "Test 5 (empty array)");

    // Test case 6: All strings satisfy the condition
    char *test6[] = {"a", "apple", "banana", "avocado", NULL};
    print_test_result(ft_any(test6, contains_a), "Test 6 (all satisfy condition)");

    // Test case 7: No strings satisfy the condition
    char *test7[] = {"b", "c", "d", "e", NULL};
    print_test_result(!ft_any(test7, contains_a), "Test 7 (none satisfy condition)");

    return 0;
}
