#include <iostream>
#include "Employee.h"
using namespace std;

namespace sdds {


   void Employee::display() {
      cout << "Name: " << m_name << "(" << m_empId
         << "), Salary: " << m_salary << endl;
   }

   void Employee::hire() {
      cout << "Name: ";
      // reads any char upto 40 chars, or \n whichever comes fist 
      // then it eats the \n and throws it away.
      cin.getline(m_name, 41, '\n');
      cout << "Salay: ";
      cin >> m_salary;
      cin.ignore(1000, '\n');//ingore a 1000 chars or '\n' whichever comes first
      cout << "Employee ID: ";
      cin >> m_empId;
      cin.ignore(1000, '\n');
   }













}