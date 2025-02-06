/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glorza-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 02:57:03 by glorza-p          #+#    #+#             */
/*   Updated: 2025/02/06 15:51:14 by glorza-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

void print_header(const char *title) {
    printf("\n\n%s--------- %s ---------%s\n", CYAN, title, RESET);
}

void print_int_result(const char *func_name, int result, int expected) {
    if (result == expected) {
        printf("%s%s: %d%s\n", GREEN, func_name, result, RESET);
    } else {
        printf("%s%s: %d%s (Expected: %d)%s\n", RED, func_name, result, YELLOW, expected, RESET);
    }
}

void print_str_result(const char *func_name, const char *result, const char *expected) {
    if (result == NULL && expected == NULL) {
        printf("%s%s: NULL%s\n", GREEN, func_name, RESET);
    } else if (result != NULL && expected != NULL && strcmp(result, expected) == 0) {
        printf("%s%s: %s%s\n", GREEN, func_name, result, RESET);
    } else {
        printf("%s%s: %s%s (Expected: %s)%s\n", RED, func_name, result, YELLOW, expected, RESET);
    }
}

void print_ulong_result(const char *func_name, unsigned long result, unsigned long expected) {
    if (result == expected) {
        printf("%s%s: %lu%s\n", GREEN, func_name, result, RESET);
    } else {
        printf("%s%s: %lu%s (Expected: %lu)%s\n", RED, func_name, result, YELLOW, expected, RESET);
    }
}

int main(void) {
    int ft_result, std_result;
    char *ft_str_result, *std_str_result;
    unsigned long ft_ulong_result, std_ulong_result;

    // ATOI
    print_header("ATOI");
    ft_result = ft_atoi(" \t\r \v-567382");
    std_result = atoi(" \t\r \v-567382");
    print_int_result("ft_atoi", ft_result, std_result);

    ft_result = ft_atoi("   \t  \v- 1235342532");
    std_result = atoi("   \t  \v- 1235342532");
    print_int_result("ft_atoi", ft_result, std_result);

    ft_result = ft_atoi(" \t\r \v+5673 824374128");
    std_result = atoi(" \t\r \v+5673 824374128");
    print_int_result("ft_atoi", ft_result, std_result);

    // ISALPHA
    print_header("ISALPHA");
    ft_result = ft_isalpha('a');
    std_result = isalpha('a');
    print_int_result("ft_isalpha", ft_result, std_result);

    ft_result = ft_isalpha('1');
    std_result = isalpha('1');
    print_int_result("ft_isalpha", ft_result, std_result);

    ft_result = ft_isalpha('z');
    std_result = isalpha('z');
    print_int_result("ft_isalpha", ft_result, std_result);

    // ISDIGIT
    print_header("ISDIGIT");
    ft_result = ft_isdigit('a');
    std_result = isdigit('a');
    print_int_result("ft_isdigit", ft_result, std_result);

    ft_result = ft_isdigit('1');
    std_result = isdigit('1');
    print_int_result("ft_isdigit", ft_result, std_result);

    ft_result = ft_isdigit('z');
    std_result = isdigit('z');
    print_int_result("ft_isdigit", ft_result, std_result);

    // ISALNUM
    print_header("ISALNUM");
    ft_result = ft_isalnum('a');
    std_result = isalnum('a');
    print_int_result("ft_isalnum", ft_result, std_result);

    ft_result = ft_isalnum('1');
    std_result = isalnum('1');
    print_int_result("ft_isalnum", ft_result, std_result);

    ft_result = ft_isalnum(' ');
    std_result = isalnum(' ');
    print_int_result("ft_isalnum", ft_result, std_result);

    // ISASCII
    print_header("ISASCII");
    ft_result = ft_isascii('\0');
    std_result = isascii('\0');
    print_int_result("ft_isascii", ft_result, std_result);

    ft_result = ft_isascii(200);
    std_result = isascii(200);
    print_int_result("ft_isascii", ft_result, std_result);

    ft_result = ft_isascii(' ');
    std_result = isascii(' ');
    print_int_result("ft_isascii", ft_result, std_result);

    // ISPRINT
    print_header("ISPRINT");
    ft_result = ft_isprint('\0');
    std_result = isprint('\0');
    print_int_result("ft_isprint", ft_result, std_result);

    ft_result = ft_isprint('1');
    std_result = isprint('1');
    print_int_result("ft_isprint", ft_result, std_result);

    ft_result = ft_isprint(' ');
    std_result = isprint(' ');
    print_int_result("ft_isprint", ft_result, std_result);

    // TOUPPER
    print_header("TOUPPER");
    ft_result = ft_toupper('1');
    std_result = toupper('1');
    print_int_result("ft_toupper", ft_result, std_result);

    ft_result = ft_toupper('a');
    std_result = toupper('a');
    print_int_result("ft_toupper", ft_result, std_result);

    ft_result = ft_toupper('C');
    std_result = toupper('C');
    print_int_result("ft_toupper", ft_result, std_result);

    // TOLOWER
    print_header("TOLOWER");
    ft_result = ft_tolower('1');
    std_result = tolower('1');
    print_int_result("ft_tolower", ft_result, std_result);

    ft_result = ft_tolower('a');
    std_result = tolower('a');
    print_int_result("ft_tolower", ft_result, std_result);

    ft_result = ft_tolower('C');
    std_result = tolower('C');
    print_int_result("ft_tolower", ft_result, std_result);

    // STRCHR
    print_header("STRCHR");
    ft_str_result = ft_strchr("Hola q tal", 'z');
    std_str_result = strchr("Hola q tal", 'z');
    print_str_result("ft_strchr", ft_str_result, std_str_result);

    ft_str_result = ft_strchr("Hola\0q tal", 'q');
    std_str_result = strchr("Hola\0q tal", 'q');
    print_str_result("ft_strchr", ft_str_result, std_str_result);

    ft_str_result = ft_strchr("Hola q tal", 'l');
    std_str_result = strchr("Hola q tal", 'l');
    print_str_result("ft_strchr", ft_str_result, std_str_result);

    // STRLEN
    print_header("STRLEN");
    ft_ulong_result = ft_strlen("Hola q tal");
    std_ulong_result = strlen("Hola q tal");
    print_ulong_result("ft_strlen", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlen("Habia una vez");
    std_ulong_result = strlen("Habia una vez");
    print_ulong_result("ft_strlen", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlen("");
    std_ulong_result = strlen("");
    print_ulong_result("ft_strlen", ft_ulong_result, std_ulong_result);

    // STRNCMP
    print_header("STRNCMP");
    ft_result = ft_strncmp("Hola q tal", "Hola q tal", 999999999);
    std_result = strncmp("Hola q tal", "Hola q tal", 999999999);
    print_int_result("ft_strncmp", ft_result, std_result);

    ft_result = ft_strncmp("Hola q tal", "Hola a tal", 10);
    std_result = strncmp("Hola q tal", "Hola a tal", 10);
    print_int_result("ft_strncmp", ft_result, std_result);

    ft_result = ft_strncmp("Hola q tal", "Hoza q tal", 15);
    std_result = strncmp("Hola q tal", "Hoza q tal", 15);
    print_int_result("ft_strncmp", ft_result, std_result);

    // STRNSTR
    #ifdef __APPLE__
    print_header("STRNSTR");
    ft_str_result = ft_strnstr("Hola q tal", "q tal", 20);
    std_str_result = strnstr("Hola q tal", "q tal", 20);
    print_str_result("ft_strnstr", ft_str_result, std_str_result);

    ft_str_result = ft_strnstr("Foo Bar Baz", "Bar", 4);
    std_str_result = strnstr("Foo Bar Baz", "Bar", 4);
    print_str_result("ft_strnstr", ft_str_result, std_str_result);

    ft_str_result = ft_strnstr("Hola q tal", "", 20);
    std_str_result = strnstr("Hola q tal", "", 20);
    print_str_result("ft_strnstr", ft_str_result, std_str_result);

    // STRLCPY
    print_header("STRLCPY");
    char ftlcpydest1[50];
    char ftlcpydest2[50];
    char ftlcpydest3[15];
    ft_ulong_result = ft_strlcpy(ftlcpydest1, "Hola que tal", 999999999);
    std_ulong_result = strlcpy(ftlcpydest1, "Hola que tal", 999999999);
    print_ulong_result("ft_strlcpy", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlcpy(ftlcpydest2, "123456789112345678921234567893", 20);
    std_ulong_result = strlcpy(ftlcpydest2, "123456789112345678921234567893", 20);
    print_ulong_result("ft_strlcpy", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlcpy(ftlcpydest3, "ABCDEFGHIJKLMNOPQ", 15);
    std_ulong_result = strlcpy(ftlcpydest3, "ABCDEFGHIJKLMNOPQ", 15);
    print_ulong_result("ft_strlcpy", ft_ulong_result, std_ulong_result);

    // STRLCAT
    print_header("STRLCAT");
    char ftlcatdest1[50] = "Aguacate ";
    char ftlcatdest2[50] = "Pincho moruno";
    char ftlcatdest3[15] = "12345678901234";
    ft_ulong_result = ft_strlcat(ftlcatdest1, "Hola que tal", 7);
    std_ulong_result = strlcat(ftlcatdest1, "Hola que tal", 7);
    print_ulong_result("ft_strlcat", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlcat(ftlcatdest2, "123456789112345678921234567893", 50);
    std_ulong_result = strlcat(ftlcatdest2, "123456789112345678921234567893", 50);
    print_ulong_result("ft_strlcat", ft_ulong_result, std_ulong_result);

    ft_ulong_result = ft_strlcat(ftlcatdest3, "ABCDEFGHIJKLMNOPQ", 15);
    std_ulong_result = strlcat(ftlcatdest3, "ABCDEFGHIJKLMNOPQ", 15);
    print_ulong_result("ft_strlcat", ft_ulong_result, std_ulong_result);
    #else
    // Skip the tests or use alternative functions
    print_header("STRLCAT");
    char ftlcatdest1[50] = "Aguacate ";
    char ftlcatdest2[50] = "Pincho moruno";
    ft_ulong_result = ft_strlcat(ftlcatdest1, "Hola que tal", 7);
    printf("ft_strlcat: %lu %s", ft_ulong_result, ftlcatdest1);
    ft_ulong_result = ft_strlcat(ftlcatdest2, "123456789112345678921234567893", 50);
    printf("ft_strlcat: %lu %s", ft_ulong_result, ftlcatdest2);
    printf("strnstr, strlcpy, and strlcat are not available on this system. Skipping tests.\n");
    #endif

    // BZERO
    print_header("BZERO");
    char ftbzsrc1[50];
    char ftbzsrc2[] = "1234567890";
    char ftbzsrc3[] = "ABCDEFGHIJ";
    char bzsrc1[50];
    char bzsrc2[] = "1234567890";
    char bzsrc3[] = "ABCDEFGHIJ";
    ft_bzero(ftbzsrc1, 13);
    bzero(bzsrc1, 13);
    print_str_result("ft_bzero", ftbzsrc1, bzsrc1);

    ft_bzero(ftbzsrc2, 5);
    bzero(bzsrc2, 5);
    print_str_result("ft_bzero", ftbzsrc2, bzsrc2);

    ft_bzero(ftbzsrc3, 5);
    bzero(bzsrc3, 5);
    print_str_result("ft_bzero", ftbzsrc3, bzsrc3);

    // MEMSET
    print_header("MEMSET");
    char ftsetsrc1[50];
    char ftsetsrc2[] = "1234567890";
    char ftsetsrc3[] = "ABCDEFGHIJ";
    char setsrc1[50];
    char setsrc2[] = "1234567890";
    char setsrc3[] = "ABCDEFGHIJ";
    ft_memset(ftsetsrc1, 'c', 13);
    memset(setsrc1, 'c', 13);
    print_str_result("ft_memset", ftsetsrc1, setsrc1);

    ft_memset(ftsetsrc2, 'A', 5);
    memset(setsrc2, 'A', 5);
    print_str_result("ft_memset", ftsetsrc2, setsrc2);

    ft_memset(ftsetsrc3, '\0', 5);
    memset(setsrc3, '\0', 5);
    print_str_result("ft_memset", ftsetsrc3, setsrc3);

    // MEMCHR
    print_header("MEMCHR");
    char ftchrsrc1[] = "ABCDEFGHIJ";
    char ftchrsrc2[] = "1234567890";
    char ftchrsrc3[] = "ABCDEFGHIJ";
    char chrsrc1[] = "ABCDEFGHIJ";
    char chrsrc2[] = "1234567890";
    char chrsrc3[] = "ABCDEFGHIJ";
    ft_str_result = ft_memchr(ftchrsrc1, '1', 13);
    std_str_result = memchr(chrsrc1, '1', 13);
    print_str_result("ft_memchr", ft_str_result, std_str_result);

    ft_str_result = ft_memchr(ftchrsrc2, '6', 5);
    std_str_result = memchr(chrsrc2, '6', 5);
    print_str_result("ft_memchr", ft_str_result, std_str_result);

    ft_str_result = ft_memchr(ftchrsrc3, 'E', 9999999999);
    std_str_result = memchr(chrsrc3, 'E', 9999999999);
    print_str_result("ft_memchr", ft_str_result, std_str_result);

    // MEMCPY
    print_header("MEMCPY");
    char ftcpydest1[50];
    char ftcpydest2[50];
    char ftcpydest3[50];
    char cpydest1[50];
    char cpydest2[50];
    char cpydest3[50];
    ft_memcpy(ftcpydest1, "ABCDEFGHIJ", 13);
    memcpy(cpydest1, "ABCDEFGHIJ", 13);
    print_str_result("ft_memcpy", ftcpydest1, cpydest1);

    ft_memcpy(ftcpydest2, "1234567890", 5);
    memcpy(cpydest2, "1234567890", 5);
    print_str_result("ft_memcpy", ftcpydest2, cpydest2);

    ft_memcpy(ftcpydest3, "The one pieeeeeece, the one piece is reeeeeeal", 50);
    memcpy(cpydest3, "The one pieeeeeece, the one piece is reeeeeeal", 50);
    print_str_result("ft_memcpy", ftcpydest3, cpydest3);

    // MEMCMP
    print_header("MEMCMP");
    char *ftcmpsrc1 = "Hello, World!";
    char *ftcmpsrc2 = "Hello, World0";
    char *ftcmpsrc3 = "Hola q tal";
    char *ftcmpsrc4 = "Hola a tal";
    char *ftcmpsrc5 = "ABCDEFGHIJ";
    char *ftcmpsrc6 = "ABCDEEGHIJ";
    ft_result = ft_memcmp(ftcmpsrc1, ftcmpsrc2, 20);
    std_result = memcmp(ftcmpsrc1, ftcmpsrc2, 20);
    print_int_result("ft_memcmp", ft_result, std_result);

    ft_result = ft_memcmp(ftcmpsrc3, ftcmpsrc4, 10);
    std_result = memcmp(ftcmpsrc3, ftcmpsrc4, 10);
    print_int_result("ft_memcmp", ft_result, std_result);

    ft_result = ft_memcmp(ftcmpsrc5, ftcmpsrc6, 5);
    std_result = memcmp(ftcmpsrc5, ftcmpsrc6, 5);
    print_int_result("ft_memcmp", ft_result, std_result);

    // MEMMOVE
    print_header("MEMMOVE");
    char src1[] = "Hello, World!";
    char dest1[50];
    char dest2[50];
    char overlap1[] = "1234567890";
    char overlap2[] = "1234567890";
    char overlap3[] = "ABCDEFGHIJ";
    char overlap4[] = "ABCDEFGHIJ";
    ft_memmove(dest1, src1, 13);
    memmove(dest2, src1, 13);
    print_str_result("ft_memmove", dest1, dest2);

    ft_memmove(overlap1 + 2, overlap1, 5);
    memmove(overlap2 + 2, overlap2, 5);
    print_str_result("ft_memmove", overlap1, overlap2);

    ft_memmove(overlap3 + 2, overlap3, 5);
    memmove(overlap4 + 2, overlap4, 5);
    print_str_result("ft_memmove", overlap3, overlap4);

    // ITOA
    print_header("ITOA");

    // Test cases
    int num1 = 9;
    int num2 = -9;
    int num3 = 10;
    int num4 = -10;
    int num5 = -2147483648; // Special case for INT_MIN
    int num6 = 12345;
    int num7 = -12345;

    // Test 1: Positive single-digit number
    ft_str_result = ft_itoa(num1);
    std_str_result = "9";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 2: Negative single-digit number
    ft_str_result = ft_itoa(num2);
    std_str_result = "-9";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 3: Positive double-digit number
    ft_str_result = ft_itoa(num3);
    std_str_result = "10";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 4: Negative double-digit number
    ft_str_result = ft_itoa(num4);
    std_str_result = "-10";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 5: INT_MIN (special case)
    ft_str_result = ft_itoa(num5);
    std_str_result = "-2147483648"; // Assuming 32-bit integers
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 6: Positive multi-digit number
    ft_str_result = ft_itoa(num6);
    std_str_result = "12345";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory

    // Test 7: Negative multi-digit number
    ft_str_result = ft_itoa(num7);
    std_str_result = "-12345";
    print_str_result("ft_itoa", ft_str_result, std_str_result);
    free(ft_str_result); // Free allocated memory
    
    // Summary
    printf("\n\n%s--------- SUMMARY ---------%s\n", MAGENTA, RESET);
    printf("%sGreen%s: Functions match the standard library.\n", GREEN, RESET);
    printf("%sRed%s: Functions do not match the standard library.\n", RED, RESET);
    printf("%sYellow%s: Expected value shown in parentheses.\n", YELLOW, RESET);

    return (0);
}
