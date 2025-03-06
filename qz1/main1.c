#include <stdio.h>
int main() {
int i = 3101;
int additional = i - 1500;
if ( additional <= 0) {
  prinf("70元\");
    } else if (additional <= 100) {
    printf("80元\n");
} else{
  int count = additional / 100;
  int remainer = (additional % 100)?1:0;
  int sum  = (count+remainer) * 10 +70;
  printf("%d元\n, sum);
}
retuen 0;
}
