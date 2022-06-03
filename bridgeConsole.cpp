#include <iostream>
#include "engine.hpp"

#define BUFFER_LEN 0x0fff

char buffer[BUFFER_LEN];

int main()
{
	while(!std::cin.fail())
	{
		buffer[0] = '\0';
		std::cin.read(buffer, BUFFER_LEN);
		std::cin.clear();
		
		std::cout << buffer;
	}
	return 0;
}