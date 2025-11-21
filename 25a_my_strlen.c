#include <stdio.h>

int my_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') i++;
    return i;
}

int main() {
    char s[200];
    printf("Enter a string: ");
    getchar(); // consume newline if any
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i]; ++i) if (s[i] == '\n') { s[i] = '\0'; break; }
    printf("Length = %d\n", my_strlen(s));
    return 0;
}