// main.cpp : Demonstrate stream input and output formatting.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <iomanip>




int main()
{
	float west = 36364.87;
	float midwest = 12431.33;
	float east = 127690.50;
	float south = 9200.00;

	std::cout.imbue(std::locale("en-US"));
	std::cout << std::setw(10) << "West: " << std::setw(2) << "$" << std::setw(10) << std::setprecision(2) << std::fixed << west << "\n";
	std::cout << std::setw(10) << "Midwest: " << std::setw(2) << "$" << std::setw(10) << std::setprecision(2) << std::fixed << midwest << "\n";
	std::cout << std::setw(10) << "East: " << std::setw(2) << "$" << std::setw(10) << std::setprecision(2) << std::fixed << east << "\n";
	std::cout << std::setw(10) << "south: " << std::setw(2) <<" $" << std::setw(10) << std::setprecision(2) << std::fixed << south << "\n";


    return 0;
}

