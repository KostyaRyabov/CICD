#include <iostream>
#include <Hello.h>

using namespace Hello;

int main( int argc, const char * argv[] )
{
	std::string name = "";

	std::cout << "Say hello to .. ";
	std::cin >> name;
	
	std::cout << Say_Hello( name ) << std::endl;

	return 0;
}

