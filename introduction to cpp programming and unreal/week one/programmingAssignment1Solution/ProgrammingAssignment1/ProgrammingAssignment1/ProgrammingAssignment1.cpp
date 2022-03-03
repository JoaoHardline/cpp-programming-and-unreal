// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 1
 * @return exit status
*/
int main()
{
	// loop while there's more input
	std::string Input;
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		// print symbols for the first 10 elements
		std::cout << "H\n";
		std::cout << "He\n";
		std::cout << "Li\n";
		std::cout << "Be\n";
		std::cout << "B\n";
		std::cout << "C\n";
		std::cout << "N\n";
		std::cout << "O\n";
		std::cout << "F\n";
		std::cout << "Ne\n";

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
