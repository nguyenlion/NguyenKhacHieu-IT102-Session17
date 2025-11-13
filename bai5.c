#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int i, same = 1;

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (strlen(str1) != strlen(str2)) {
        same = 0;
    } else {
        for (i = 0; str1[i] != '\0'; i++) {
            if (tolower(str1[i]) != tolower(str2[i])) {
                same = 0;
                break;
            }
        }
    }

    if (same)
        printf("Giong nhau\n");
    else
        printf("Khac nhau\n");

    return 0;
}

