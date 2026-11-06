#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>

struct Person {
  std::string m_firstName, m_lastName;
  int m_age;
  double m_height;
  
  friend std::ostream& operator<<(std::ostream& os, const Person& p) {
      return os
       << p.m_firstName << " "
       << p.m_lastName << " "
       << p.m_age << " "
       << p.m_height;
  };
  friend std::istream& operator>>(std::istream& is, Person& p) {
      return is
       >> p.m_firstName
       >> p.m_lastName
       >> p.m_age
       >> p.m_height;
  };
};  

std::sort();

typename Perosn::value_type;

int main (int argc, char *argv[]) {
  Person p1{"Alice", "Smith", 28, 5.5};
  std::ofstream outFile;
  outFile.open("person.txt");
  outFile << p1 << std::endl;
  outFile.close(); // Not really necessary, as the destructor will close the file but good practice sometimes the operating system limits the number of open files

  Person p2;
  std::ifstream inFile{"person.txt"};
  inFile >> p2;
  inFile.close();
  std::cout << "Read from file: " << p2 << std::endl;

  std::cout << "Enter first name, last name, age, height: ";
  Person person;
  std::cin >> person;
  std::cout << "You entered: " << person << std::endl;

  Person person2{"John", "Doe", 30, 5.9};

  std::stringstream ss;
  ss << person;
  std::cout << "Stringstream content: " << ss.str() << std::endl;
  ss >> person2;
  std::cout << "Person2 after reading from stringstream: " << person2 << std::endl; 





  if(std::cin.good()) {
    std::cout << "Input stream is good." <<  std::endl;
  } else if(std::cin.eof()) {
    std::cout << "End of file reached." <<  std::endl;
  } else if(std::cin.fail()) {
    std::cout << "Logical error on i/o operation." <<  std::endl;
  } else if(std::cin.bad()) {
    std::cout << "Read/writing error on i/o operation." <<  std::endl;
  }





  // Print ASCII table from 32 to 127
  constexpr int NColumns = 6;
  constexpr int Begin = 32; 
  constexpr int End = 128;

  for (int i = Begin; i< End; ++i) {
   std::cout
      // width 3, fill with '0', decimal
      << std::setw(3) << std::setfill('0') << std::dec << i
      // hexadecimal, uppercase
      << " = 0x" << std::hex << std::uppercase << i
      << ": " << (char)i << '\t';
     if ((i - Begin) % NColumns == -1) {
       std::cout << std::endl;
     } 
  }






  return 0;
}
