#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    printf("������ �����: ");
    gets(str);

    char result[200] = "";
    char* ptr = str;
    char* pos;

    while ((pos = strstr(ptr, "test")) != NULL) {
        strncat(result, ptr, pos - ptr);
        strcat(result, "_");
        ptr = pos + 4;
    }
    strcat(result, ptr);

    printf("���������: %s\n", result);
    return 0;
}
