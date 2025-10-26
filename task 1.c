#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    printf("Введіть рядок (Enter для завершення):\n");

    while ((ch = getchar()) != '\n') {
        if (isupper(ch)) ch = tolower(ch);
        putchar(ch);
    }

    return 0;
}
