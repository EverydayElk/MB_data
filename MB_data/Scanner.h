#ifndef SCANNER
#define SCANNER

#include "keyCompare.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

class Scanner
{
	friend class keyCompare;
public:
	Scanner();
	string& readLine(fstream& in);
	string& readWord(string line);
	void displayLine();
	keyCompare key;
private:
	fstream in;
	
};


#endif