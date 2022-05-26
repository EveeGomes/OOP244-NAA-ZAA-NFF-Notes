#include "Company.h"
using namespace sdds;
int main() {
   Company C;
   C.setNoOfEmployees();
   C.hire();
   C.listEmployees();
   C.expand();
   C.listEmployees();
   C.deleteEmployees();
   return 0;
}