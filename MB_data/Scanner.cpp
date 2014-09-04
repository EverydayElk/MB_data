#include "Scanner.h"


using namespace std;

Scanner::Scanner()
{
	
	
}

string& Scanner::readLine(fstream& in)
{
	string line = "empty";
	if (in.is_open()){
		cout << "good job asshole" << endl;
		getline(in, line);
		cout << line << endl;
		return line;
	}
	return line;
}

string& Scanner::readWord(string line)
{
	string word;
	stringstream ss(line);
	while (!ss.eof){
		getline(ss, word, ' ');
		word = key.filterIgnore(word);
		cout << word << endl;
		return word;
	}
	return word;
}


void Scanner::displayLine()
{

}

