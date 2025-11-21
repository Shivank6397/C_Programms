#include <stdio.h>

void my_strcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') { dest[i] = src[i]; i++; }
    dest[i] = '\0';
}

int main() {
    char src[200], dest[200];
    printf("Enter source string: ");
    getchar();
    fgets(src, sizeof(src), stdin);
    for (int i = 0; src[i]; ++i) if (src[i] == '\n') { src[i] = '\0'; break; }
    my_strcpy(dest, src);
    printf("Copied string: %s\n", dest);
    return 0;
}