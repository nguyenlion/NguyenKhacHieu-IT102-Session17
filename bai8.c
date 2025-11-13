#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Nhap mat khau: ");
    fgets(password, sizeof(password), stdin);

    // Xoa \n neu co 
    password[strcspn(password, "\n")] = '\0';

    int length = strlen(password);

    // Kiem tra tung ky tu trong mk 
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        } else if (islower(password[i])) {
            hasLower = 1;
        } else if (isdigit(password[i])) {
            hasDigit = 1;
        } else {
            hasSpecial = 1; // ky tu db 
        }
    }

    // Kiem tra dk 
    if (length >= 8 && hasUpper && hasLower && hasDigit && hasSpecial) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }

    return 0;
}

