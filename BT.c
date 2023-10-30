/*
viet chuong trinh duyet mat khau 
neu nho hon 15 ky tu thi phai tm : tren 8 ky tu, co 1 chu in hoa, 1 chu in thuong, 1 so , q ki tu  
*/


#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello!@#123";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i])) {
            printf("Chu?i k? t? ch?a k? t? ð?c bi?t: %c\n", str[i]);
        }
    }

    return 0;
}

 
