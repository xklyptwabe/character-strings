#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];
    printf("������ �����: ");
    gets(str);

    char* pos = strstr(str, "test");
    if (pos != NULL) {
        strcpy(pos, "_");
        strcat(str, pos + 4); 
    }

    printf("���������: %s\n", str);
    return 0;
}
