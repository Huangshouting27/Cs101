#include <stdio.h>

int main() {
    for (int i = 0; i < 81; i++){
        int y = i / 9 + 1;
        int x = i % 9 + 1;
        printf("%d*%d=%d\t", y, x, y * x);
        if (x == 9){
            printf("\n");
        }
    }
    return 0;
}
