#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k = n+1;
    int highest = 0; //bool  用來去掉前綴的0,只有出現過1之後才輸出0,所以for的i=10 i--(使k是由左至右檢查)
    for (int i = 10; i >= 0; i--) {
        if (k & (1 << i)) /*把1*2的1次方到i次方然後一個一個跟k對應
                            E.g. k = 0b10100110
                            看 K 的第3位 (1010[0]110)
                            1<<3 == 0b00001000 == 8 == 2^3
                            10100110
                            00001000
                            -----------------
                            00000000 */
        {
            printf("%d", 1);
            highest = 1;
        } else {
            if (highest) {
                printf("%d", 0);
            }
        }
    }
    int carry = 0;
    for (int i = 0; i <= 10; i++) {
        if (n & (1 << i)) {
            carry += 1;
        } else {
            break;
        }
    }

    printf(" %d", carry);
}