#define _CRT_SECURE_NO_WARNINGS
// the define statement: the compiler will do whatever is in the define statement before compiling anything else
// example if we have:
// #define hello printf("Hello!\n")
// then everytime we have hello in our code, it'll print that in the console (because that was defined by us)
// "search and replace" will show where the error is

#include <cstdio>
#include "pointers.h"

// the job of a pointer is to hold an address. It has the same size as an int (occupies 4 bytes in memory)
// segmentation fault is when we try to access an address that doesn't belong to that variable
// when creating a pointer we have to tell which is the type, since the pointer needs to be aware of the type of variable it'll hold the address for:
// int* ptr; // double* ptr; etc (* means Pointer)
// however the size of the pointer won't change, it still occupies 4 bytes of memory (CHECK WITH FARDAD!!!!!!!!!!!)

using namespace std;
int main() {
   int var;
 //intPointer ptr = AddressOf var; 
   int*        ptr = &var;
   var = 234;
//   printf("%d\n", TargetOf ptr);
   printf("%d\n", *ptr);

// TargetOf ptr = 1000; // we use "TargetOf" to indirectly change the value of the variable which the pointer holds the address (in this case change the value of var)
   *ptr = 1000;

   printf("%d\n", var);

   return 0;
}
