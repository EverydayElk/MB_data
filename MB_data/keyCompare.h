#ifndef KEYCOMPARE
#define KEYCOMPARE

#include "Scanner.h"

using namespace std;

class keyCompare 
{
	friend class Scanner;
public: 
	void addIgnore();
	string& filterIgnore(string word);
	keyCompare();
private:
	char ignore[10];
	
	struct node{
		string word;
		node * next;
	};
	node * keyListHead;
};

#endif