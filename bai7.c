#include <stdio.h>

int main() {
    char str[200];
    char longest[50];
    int i = 0, j = 0, len = 0, maxLen = 0;
    int start = 0, end = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);

    // Xoa \n neu co 
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    i = 0;
    while (1) {
        // Bo qua cac khoang trong
        while (str[i] == ' ') {
            i++;
        }

        // neu da het chuoi thi thoat  
        if (str[i] == '\0') {
            break;
        }

        // Xac dinh vi tri bat dau cua tu 
        start = i;

        // Duyet den khi gap khoang trong hoac het chuoi
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }

        // Vi tri ket thuc tu 
        end = i;

        // Tinh do dai tu 
        len = end - start;

        // Neu tu nay dai hon tu dai nhat truoc day 
        if (len > maxLen) {
            maxLen = len;

            // Sao chep tu nay vao bien longest 
            int k;
            for (k = 0; k < len; k++) {
                longest[k] = str[start + k];
            }
            longest[len] = '\0'; // ket thuc chuoi 
        }

        // Neu da den cuoi chuoi thi thoat 
        if (str[i] == '\0') {
            break;
        }
    }
	//in  
    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", maxLen);

    return 0;
}

