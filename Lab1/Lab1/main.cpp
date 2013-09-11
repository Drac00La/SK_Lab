#include "Tree.h"

#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

int main()
{
	srand (time(NULL));
	Tree tree;

	std::cout << "Type \"Destroy_world\" to exit.\n";
	std::cout << "Type \"grow\" to grow apples and \"shake\" to drop them.\n";
	std::string input = "";
	while (input != "Destroy_world")
	{
		std::cin >> input;
		if (input == "grow")
		{
			int const grown = tree.Grow();
			std::cout << grown << " apples has grown this time.\n";
			std::cout << tree.CountApples() << " so far on tree.\n";
		}
		else if (input == "shake")
		{
			int const dropped = tree.Shake();
			std::cout << dropped << " apples has dropped this time.\n";
			std::cout << tree.CountApples() << " so far on tree.\n";
		}
	}

	return 0;
}