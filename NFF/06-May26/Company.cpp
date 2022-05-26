#include <iostream>
#include "Employee.h"
#include "Company.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   void Company::startup(){
      char tempName[128]{};
      cout << "Enter Company Name" << endl << "> ";
      cin.getline(tempName, 128, '\n');
      startup(tempName);
   }
   void Company::startup(const char* name) {
      if (name) { // if name is not nullptr
         m_name = new char[U.strlen(name)+1];
         U.strcpy(m_name, name);
      }
      else {
         m_name = nullptr;
      }
      setNoOfEmployees();
   }
   void Company::setNoOfEmployees() {
      cout << "Number if employees to hire: ";
      cin >> m_total_no_of_employees;
      cin.ignore(1000, '\n');
      m_workers = new Employee[m_total_no_of_employees];
      if (m_workers == nullptr) {
         m_total_no_of_employees = 0;
      }
   }
   int Company::noOfEmployees() {
      return m_no_of_employees;
   }
   void Company::closeDown() {
      deleteEmployees();
   }
   void Company::expand() {
      int to_add{};
      Employee* temp{};        // function scope: will die when the func  is done.
      cout << "Enter number of employees to add to company: ";
      cin >> to_add;
      temp = new Employee[m_total_no_of_employees + to_add];
      for (int i = 0; i < m_total_no_of_employees; i++) {
         temp[i] = m_workers[i];
      }
      deleteEmployees();
      m_workers = temp;
      m_total_no_of_employees += to_add;
   }

   void Company::deleteEmployees() {
      delete[] m_workers;
      m_workers = nullptr;
   }
   void Company::listEmployees() {
      for (int i = 0; i < m_no_of_employees; i++) {
         int j = i;  // j has a block scope
         m_workers[i].display();
      }
   }
   void Company::hire() {
      while (m_no_of_employees < m_total_no_of_employees) {
         cout << "Employee number " << m_no_of_employees + 1 << " out of " << m_total_no_of_employees << endl;
         m_workers[m_no_of_employees].hire();
         //        m_workers[m_no_of_employees].m_name[0] = 0; private and not accessible
         m_no_of_employees++;
      }
   }

}