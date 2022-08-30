

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
   int a = 10;
   int b = 20;
   int counter = 0;
   /*  if (a < b) {
        a += 1;
        printf("a is %d\n", a);
     }*/

   // while loop it's like an if statement that repeats!
   while (a < b) { //while this condition is true, keep doing the following; however, we need something that will change the condition over each iteration otherwise we'll have an endless loop! 
      a += 1; 
      printf("a is %d\n", a);
      counter++;
   }
   printf("loop repeated %d times\n", counter);
   
   counter = 0;
   while (a < b) { // this loop may never happen because a was increased in the last while loop (zero or many)
      a += 1;
      printf("a is %d\n", a);
      counter++;
   }
   printf("loop repeated %d times\n", counter);
   return 0;
}
