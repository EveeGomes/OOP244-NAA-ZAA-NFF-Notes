#include <cstdio>
using namespace std;
int main() {
   char i;
   i = 24;
   printf("%d\n", i);
   i = 127;
   printf("%d\n", i);
   i++;
   printf("%d\n", i);  // the output is now -128 (because it returns to the beginning of the circle!) 
   // -> character is the smallest integer in C language
   // it's big enough to hold the ASCII code
   
   i = 'A';
   printf("%d\n", i); // prints 65 which is the interger for the uppercase character A (to print A, need to change to %c in the printf)
   // in the for loop there's nothing in the beginning because i is already = 'A'
   for (; i <= 'Z'; i++) {
      printf("%c ", i);
   }
   putchar('\n'); 

   int x; // this becomes a name of 4 bytes of memory that can hold a binary number (with the size of an integer 0 - 2^32 - 1 or half of that negative/positive)

   float f; // same, f becomes a piece of memory of 4 bytes
   return 0;
}
