#include <iostream>
#include <string>
int main()
{
std::string name, lastname;
std::cout << "Enter your name" << std::endl;
std::cin >> name;
std::cout << "Enter your lastname" << std::endl;
std::cin >> lastname;
std::cout << "Hello " << name << lastname << std::endl;
return 0;
}