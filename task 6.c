#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LEN 100

int main(void) {
    char arr[SIZE][LEN];
    printf("Введіть %d рядків:\n", SIZE);

    for (int i = 0; i < SIZE; i++)
        gets(arr[i]);

    int min_i = 0, max_i = 0;
    for (int i = 1; i < SIZE; i++) {
        if (strlen(arr[i]) < strlen(arr[min_i])) min_i = i;
        if (strlen(arr[i]) > strlen(arr[max_i])) max_i = i;
    }

    printf("\nНайкоротша: %s\n", arr[min_i]);
    printf("Найдовша: %s\n", arr[max_i]);
    return 0;
}
