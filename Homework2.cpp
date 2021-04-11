#include <iostream>
#include <string>
#include <stdint.h>
#include <iomanip>

int main()
{
	std::string name;
	int x;


	name = "max";

	std::cout << name << "\n";

	std::cout << name.length()<< "\n";

	x = name.length();
	
	std::cout << name[0] << "\n";
	
	std::cout << name[x - 1] << "";
	
}
