#include "Library.h"
#include "LibraryBook.h"
#include "LibraryMagazine.h"
#include "LibraryVideo.h"
#include <iostream>
#include <string>
#include <sstream>


int main()
{
	Library lib;

	string command;
	
	while (command != "quit")
	{
		cout << "awaiting input" << endl;

		string prt;
		getline(cin, command);
		stringstream ss;
		ss << command;
		int i = 0;
		string arr[5];
		while (ss >> prt) {
			arr[i] = prt;
			i++;
		}
		
		if (arr[0] == "add")
		{
			if (arr[1] == "book") { lib.add(new LibraryBook(stoi(arr[2]), arr[3], arr[4])); }
			if (arr[1] == "magazine") { lib.add(new LibraryMagazine(stoi(arr[2]), arr[3], stoi(arr[4]))); }
			if (arr[1] == "video") { lib.add(new LibraryVideo(stoi(arr[2]), arr[3], stoi(arr[4]))); }
		}
		if (arr[0] == "remove") { lib.remove(stoi(arr[1])); }
		if (arr[0] == "retrieve") { lib.retrieve(stoi(arr[1]))->print(); }
		if (arr[0] == "update") { 
			if (arr[1] == "book") { lib.update(stoi(arr[2]), new LibraryBook(stoi(arr[2]), arr[3], arr[4])); }
			if (arr[1] == "magazine") { lib.update(stoi(arr[2]), new LibraryMagazine(stoi(arr[2]), arr[3], stoi(arr[4]))); }
			if (arr[1] == "video") { lib.update(stoi(arr[2]), new LibraryVideo(stoi(arr[2]), arr[3], stoi(arr[4]))); }
		}
		if (arr[0] == "print") { lib.printAll(); }

	}

	return 0;
}
