#include <stdio.h>
#include <string.h>

// Prototype for the ft_count_if function
int ft_count_if(char **tab, int (*f)(char*));

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
    printf("%s: %d\n", test_name, result);
}

int main() {
    // Test case 1: Count strings containing 'a'
    char *test1[] = {"apple", "banana", "cherry", "date", NULL};
    print_test_result(ft_count_if(test1, contains_a), "Test 1 (contains 'a')");

    // Test case 2: Count empty strings
    char *test2[] = {"", "non-empty", "another", "", NULL};
    print_test_result(ft_count_if(test2, is_empty), "Test 2 (is empty)");

    // Test case 3: Count strings starting with "hello"
    char *test3[] = {"hi", "hello world", "hey", "hello", NULL};
    print_test_result(ft_count_if(test3, starts_with_hello), "Test 3 (starts with 'hello')");

    // Test case 4: Count strings meeting complex condition
    char *test4[] = {"abc1", "def", "gh2i", "jkl3", NULL};
    print_test_result(ft_count_if(test4, complex_condition), "Test 4 (complex condition)");

    // Test case 5: Edge case - empty array
    char *test5[] = {NULL};
    print_test_result(ft_count_if(test5, contains_a), "Test 5 (empty array)");

    // Test case 6: All strings satisfy the condition
    char *test6[] = {"a", "apple", "banana", "avocado", NULL};
    print_test_result(ft_count_if(test6, contains_a), "Test 6 (all satisfy condition)");

    // Test case 7: No strings satisfy the condition
    char *test7[] = {"b", "c", "d", "e", NULL};
    print_test_result(ft_count_if(test7, contains_a), "Test 7 (none satisfy condition)");

    return 0;
}
