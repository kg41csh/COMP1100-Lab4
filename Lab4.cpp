#include <iostream>
#include <string>
#include <sstream>

// Include the library that will allow you to convert from string to integer


int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "============================" << std::endl;
  std::cout <<              "=          PART 1          =" << std::endl;
  std::cout <<              "============================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
  
    int a, b, c;
    
    std::cout << "Enter Three numbers: ";
    std::cin >>  a >>  b >>  c;
    std::cout << "your numbers are: " << a  << ", " << b << ", " << c << std::endl;

   
  // Multiply the three integers
     int d = a*b*c;

  // Output the result of the multiplication
     std::cout << a << " * " << b << " * " << c << " = " << d << std::endl; 


  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "============================" << std::endl;
  std::cout <<              "=          PART 2          =" << std::endl;
  std::cout <<              "============================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::string name;
  std::cout << "What is your last name? ";
  std::getline (std::cin, name);

  std::string name2;
  std::cout << "What are you taking program in St.Lawrence college? ";
  std::getline (std::cin, name2);

  std::string roomNum;
  std::cout << "what is room number for lab? " ;
  std::getline (std::cin, roomNum);

  std::cout << "\n";
  std::cout << "Hello, Mr. " << name << " congraturations!" << "\n";
  std::cout << "You are taking " << name2 << " program at St.Lawrence" << ".\n";
  std::cout << "Your room number is " << roomNum << ".\n";

 
  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "============================" << std::endl;
  std::cout <<              "=          PART 3          =" << std::endl;
  std::cout <<              "============================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  
  int mydigit;
  std::stringstream(myNumber) >> mydigit;

  std::cout << mydigit << " is an integer" << std::endl; //Insert the integer before the text of this output 
  
  return 0;
}