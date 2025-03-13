#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}
// Prototypes for the functions to test
void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *));

// Function to print an array of strings
void print_string_array(char **array, const char *name) {
    printf("%s:\n", name);
    int i = 0;
    while (array[i]) {
        printf("  %s\n", array[i]);
        i++;
    }
    printf("\n");
}

int main() {
    // Test case 1: Basic sorting
    char *test1[] = {"banana", "apple", "cherry", "date", NULL};
    print_string_array(test1, "Test 1 - Before sorting");
    ft_advanced_sort_string_tab(test1, ft_strcmp);
    print_string_array(test1, "Test 1 - After sorting");

    // Test case 2: Already sorted
    char *test2[] = {"apple", "banana", "cherry", "date", NULL};
    print_string_array(test2, "Test 2 - Before sorting");
    ft_advanced_sort_string_tab(test2, ft_strcmp);
    print_string_array(test2, "Test 2 - After sorting");

    // Test case 3: Reverse sorted
    char *test3[] = {"date", "cherry", "banana", "apple", NULL};
    print_string_array(test3, "Test 3 - Before sorting");
    ft_advanced_sort_string_tab(test3, ft_strcmp);
    print_string_array(test3, "Test 3 - After sorting");

    // Test case 4: With empty string
    char *test4[] = {"", "a", "ab", "abc", NULL};
    print_string_array(test4, "Test 4 - Before sorting");
    ft_advanced_sort_string_tab(test4, ft_strcmp);
    print_string_array(test4, "Test 4 - After sorting");

    // Test case 5: With uppercase letters
    char *test5[] = {"Hello", "hello", "HELLO", "hElLo", NULL};
    print_string_array(test5, "Test 5 - Before sorting");
    ft_advanced_sort_string_tab(test5, ft_strcmp);
    print_string_array(test5, "Test 5 - After sorting");

    // Test case 6: Single element
    char *test6[] = {"onlyone", NULL};
    print_string_array(test6, "Test 6 - Before sorting");
    ft_advanced_sort_string_tab(test6, ft_strcmp);
    print_string_array(test6, "Test 6 - After sorting");

    // Test case 7: Empty array
    char *test7[] = {NULL};
    print_string_array(test7, "Test 7 - Before sorting");
    ft_advanced_sort_string_tab(test7, ft_strcmp);
    print_string_array(test7, "Test 7 - After sorting");

    return 0;
}
