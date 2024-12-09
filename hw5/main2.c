#include <stdio.h>

int main() {
    double PI = 4.0;     
    int n = 1000000;     
    int sign = -1;       
    for (int i = 3; i <= (2 * n + 1); i += 2) {
        PI += sign * (4.0 / i); 
        sign = -sign;          
    }

    printf("計算出的 PI 值為: %.5f\n", PI); 
    return 0;
}
