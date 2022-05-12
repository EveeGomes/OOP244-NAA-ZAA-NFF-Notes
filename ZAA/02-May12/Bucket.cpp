#include <iostream>
#include "Bucket.h"
using namespace std;
/*struct*/ Bucket B;
void displayBucket() {
   cout << "Bucket size: " << B.m_size << endl;
   cout << "Bucket value: " << B.m_value << endl;
}

void setBucket(int size, int value) {
   B.m_size = size;
   B.m_value = value;
}

void fillBucket(int value) {
   if (B.m_value + value < B.m_size) {
      B.m_value += value;
   }
}

int emptyBucket(int value) {
   if (B.m_value > value) {
      B.m_value -= value;
   }
   else {
      value = B.m_value;
      B.m_value = 0;
   }
   return value;
}