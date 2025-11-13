#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    char str[100];
    int choice;

    printf("Nhap chuoi bat ky: ");
    gets(str); 

    printf("\n--------- MENU ---------\n");
    printf("1. Chuyen thanh chu HOA\n");
    printf("2. Chuyen thanh chu thuong\n");
    printf("Nhap lua chon (1 hoac 2): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        for (int i = 0; i < strlen(str); i++) {
            str[i] = toupper(str[i]); 
        }
        printf("Chuoi chu HOA: %s\n", str);
    }
    else if (choice == 2) {
        for (int i = 0; i < strlen(str); i++) {
            str[i] = tolower(str[i]); 
        }
        printf("Chuoi chu thuong: %s\n", str);
    }
    else {
        printf("Lua chon khong hop le!\n");
    }

    return 0;
}
