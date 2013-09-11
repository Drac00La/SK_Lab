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
	std::cout << "Type \"blossom\" to grow flowers, \"grow\" to grow apples (can only be grown from flowers),"
		"\"shake\" to drop them.\n";
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
			std::cout << tree.CountApples() << " apples so far on tree.\n";
		}
		else if (input == "blossom")
		{
			int const blossomed = tree.Blossom();
			std::cout << blossomed << " flowers has grown this time.\n";
			std::cout << tree.CountFlowers() << " flowers so far on tree.\n";
		}
	}

	return 0;
}