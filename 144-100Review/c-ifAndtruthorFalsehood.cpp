#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

/*
"It is important to consider when writing a program:
 -> Decision making: which means that based on a certain condition you do something;
 -> And based on certain condition, you repeat something!
 Based on some decision: do something; or based on some decision: repeat something!"
 A decision is to treat the outcome of an operation as true or false (truth or falsehood)! Then, from here act in different ways according to what it's needed.
 
 The simplest decision is using if (condition)
 The condition can be any operation that returns a value (true or false)
*/

int foo() {
   int d;
   printf("enter a number: ");
   scanf("%d", &d);
   return d;
}
int main() {
   int condition = 1234;
   if (condition) {
      printf("Condition is ture and is %d\n", condition);
   }
   else {
      printf("Contition is false and is %d\n", condition);
   }
   condition = 0;
   if (condition) {
      printf("Condition is ture and is %d\n", condition);
   }
   else {
      printf("Contition is false and is %d\n", condition);
   }
   if (foo()) {
      printf("Condition is ture\n");
   }
   else {
      printf("Contition is false\n");
   }
   if (foo()) {
      printf("Condition is ture\n");
   }
   else {
      printf("Contition is false\n");
   }
   return 0;
}
