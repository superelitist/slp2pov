// slp2pov.cpp : Defines the entry point for the console application.
//
//										 ___________
/*--------------------------------------/-----------\----------------------------------------\
|										\___TO-DO___/										 |
|																							 |
| [] error_handler	=>	learn how to raise and handle exceptions in c++						 |
| [] log_handler	=>	decide on a logging scheme.											 |
| [] config_handler	=>	priority: command-line -> .cfg -> built-in defaults					 |
| [] file_handler	=>																		 |
| [] parser			=>	start defining Regexes to slice the strings and build the objects.	 |
\___________________________________________________________________________________________*/

#include "stdafx.h"

int _tmain(int argc, _TCHAR* argv[])	// find out how to take arbitrary arguments: pass them into an array.
										// So assuming for example that we get passed 6 arguments. We'll need to check each argument
										// for validity against a list of flags. If they match, then we check if the following value
										// is acceptable for *that* flag. then we pass it to the config handler. Or is this the config handler?

{
	std::cout << "Version 0.03\n";
	if (argc != 2) // argc should be 2 for correct execution
		std::cout << "usage: " << "slp2pov" << " <filename>\n"; // Original author recommended argv[0], but that outputs gibberish. I'm hardcoding this in lieu of a workaround.
	else {
		// We assume argv[1] is a filename to open
		std::ifstream the_file(argv[1]);
		// Always check to see if file opening succeeded
		if (!the_file.is_open())
			std::cout << "Could not open file" << std::endl;
		else {
			std::string line;
			int line_num = 0;
			if (the_file.good()){ // good() returns true except for an eof or other error.
				getline(the_file, line); // HOPING this always starts with the first line!
				line_num++;
				std::smatch match;
				std::regex e ("\\b(solid)([^ ]*)");
				if (!regex_search(line, match, e)){
					std::cout << "first line does NOT appear to be a solid, quitting..." << std::endl;
					return 1;
				}
				else {
					std::cout << "first line looks pretty solid..." << std::endl;
				}
				
			}
			while (the_file.good()){ // good() returns true except for an eof or other error.
				getline (the_file , line); // hoping this is now the second line.
				line_num++;

				//std::cout << line_num;
				std::cout << line << std::endl; // prints the line out. Will be removed at some point.
				// we need to figure out some basic things about the file, to make sure it is parsable.
				// is the first word in the file always "solid"?
				// 
			}
//			slp2pov_test (); // insert some code testing...

		}
		// the_file is closed implicitly here
	}
	return 0;
}