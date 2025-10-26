#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    printf("¬вед≥ть р€док: ");
    gets(str);

    char* word = strtok(str, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }

    return 0;
}
