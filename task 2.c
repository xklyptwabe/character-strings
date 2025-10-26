#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str1[] = "125";
    char str2[] = "val=237";
    char str3[] = "filename=a.txt";

    int num1 = atoi(str1); 
    printf("Рядок \"%s\" -> число %d\n", str1, num1);

    char* pos2 = strchr(str2, '='); 
    if (pos2 != NULL) {
        int num2 = atoi(pos2 + 1);  
        printf("З рядка \"%s\" отримано число %d\n", str2, num2);
    }

    char* pos3 = strchr(str3, '=');
    if (pos3 != NULL) {
        printf("Ім'я файлу: %s\n", pos3 + 1);
    }

    return 0;
}
 