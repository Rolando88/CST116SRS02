/* main.cpp : Read user input from std::cin with a prompt for a number "Enter a number: ".
Display the number back to std::cout with the format in scientific notation.
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	float number = 0;
	std::cout << "Enter a number: ";
	std::cin >> number;
	std::cout << std::scientific << number << std::endl;

    return 0;
}

