#include <iostream>
#include <string>
#include "askname.h"
using namespace std;
int main()
{
string name, lastname;
askname(name,lastname);
std::cout << "Hello, " << name << lastname << std::endl;
return 0;
}