#include <stdio.h>

int main() {
    int i = 12345;
    int digits[10];
    int length = 0;
    int result = 0;
    while (i > 0) {
        digits[length] = i % 10;
        i /= 10;
        length++;
    }
    while (length < 4) {
        digits[length] = 0;
        length++;
    }
    int temp = digits[3];
    digits[3] = digits[0];
    digits[0] =temp;
    for(int j = length - 1; j >= 0; j--) {
    result = result * 10 + digits[j];
    }
    printf("%d\n", result);
    return 0;
}
