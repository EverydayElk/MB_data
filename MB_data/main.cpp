#include "Scanner.h"

using namespace std;

int main()
{
	Scanner scan;
	//keyCompare key;
	fstream doc("test.txt");
	
	scan.key.addIgnore();
	
	while (!doc.eof())
		scan.readWord(doc);
	
	
	
	
};