#include <stdio.h>

int my_strlen(const char s[]) {
    int i = 0; while (s[i] != '\0') i++; return i;
}
void my_strcpy(char dest[], const char src[]) {
    int i = 0; while (src[i] != '\0') { dest[i] = src[i]; i++; } dest[i] = '\0';
}
void my_strcat(char dest[], const char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') { dest[i++] = src[j++]; }
    dest[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    getchar();
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for (int i = 0; str1[i]; ++i) if (str1[i] == '\n') { str1[i] = '\0'; break; }
    for (int i = 0; str2[i]; ++i) if (str2[i] == '\n') { str2[i] = '\0'; break; }
    printf("\nLength of first string = %d", my_strlen(str1));
    printf("\nLength of second string = %d\n", my_strlen(str2));
    my_strcpy(result, str1);
    printf("\nAfter copying str1 to result: %s", result);
    my_strcat(result, str2);
    printf("\nAfter concatenation of str1 and str2: %s\n", result);
    return 0;
}