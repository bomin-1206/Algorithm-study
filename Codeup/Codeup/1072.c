#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int n, num;
    scanf("%d", &n);
start:
    scanf("%d", &num);
    if (n-- != 0) {
        printf("%d \n", num);
        goto start;
    }

    return 0;
}