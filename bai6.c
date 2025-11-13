#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50];
    char longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
	//xoa \n neu co
    str[strcspn(str, "\n")] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
           	//luu ky tu cua tu hien tai
		    word[j++] = str[i];
        } else {
            //ket thuc 1 tu
			word[j] = '\0';
            len = strlen(word);
			
			//so sanh do dai de tim tu dai nhat
            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }

            j = 0; //reset de bat dau 1 tu moi
        }

        if (str[i] == '\0')
            break; //ket thuc

        i++;
    }
	//in
    printf("Tu dai nhat: %s\n", longest);
    printf("Do dai: %d\n", maxLen);

    return 0;
}

