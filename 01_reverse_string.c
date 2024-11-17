#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void reverseString(wchar_t* str) {
    int len = wcslen(str);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        // Swap characters at left and right indices
        wchar_t temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}

int main() {
    // Set the locale to support wide characters
    setlocale(LC_ALL, "");

    wchar_t str1[] = L"coderbyte";
    wchar_t str2[] = L"ozygt";

    wprintf(L"Input:  \"%ls\"\n", str1);
    reverseString(str1);
    wprintf(L"Output: \"%ls\"\n\n", str1);

    wprintf(L"Input:  \"%ls\"\n", str2);
    reverseString(str2);
    wprintf(L"Output: \"%ls\"\n", str2);

    return 0;
}

