#include <cstdio>
using namespace std;
int main() {
   int i, j, k;
   int l;  // for loop index
   int m;  // the number of whatever
   int n;

   i = 2; j = 3; k = 5;
   n = i + j * k;  // * wins  n is 17

   // every/any operator(operation?) returns a value!!!
   n = j - i;
   n = j < i;
   printf("3 < 2: %d\n", n);
   n = i < j;
   printf("2 < 3: %d\n", n);

   // if the result of a logical operator is stored, it is always true (1) or false (0);
   i = 0; 
   j = 1;
   k = 234;

   n = (i && j); //T and F = false! 0
   printf("0 && 1: %d\n", n);
   
   n = (i || j); //T or F = true! 1
   printf("0 || 1: %d\n", n);

   n = (i || k); //true
   // evaluation of truth and falsehood is  "anything but zero" and "zero"
   printf("0 || 234: %d\n", n);


   return 0;
}
