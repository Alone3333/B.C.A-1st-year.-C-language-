#include <stdio.h>

int main() {
   int decimal, binary = 0, base = 1, remainder;

   printf("Enter a decimal number: ");
   scanf("%d", &decimal);

   while (decimal > 0) {
      remainder = decimal % 2;
      binary = binary + (remainder * base);
      decimal = decimal / 2;
      base = base * 10;
   }

   printf("The binary equivalent is %d.\n", binary);

   return 0;
}



