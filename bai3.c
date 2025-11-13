#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Nhap chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; 

    printf("Nhap chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);

    printf("Chuoi sau khi noi: %s\n", str1);

    return 0;
}
