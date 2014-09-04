#include "keyCompare.h"


using namespace std;


keyCompare::keyCompare()
{
	for (int i = 0; i < 10; i++)
		ignore[i] = NULL;
}

void keyCompare::addIgnore()
{
	cout << "Please enter the (single) character to ignore:  ";
	for (int i = 0; i < 10; i++)
	{
		if (ignore[i] == NULL){
			cin >> ignore[i];
			break;
		}
	}

	cout << "Currently ignoring: " << endl;
	for (int i = 0; i < 10; i++){
		if (ignore[i] == NULL)
			break;
		cout << ignore[i] << endl;
	}

}


string& keyCompare::filterIgnore(string word)
{
	for (int i = 0; i < 10;i++)
	{
		if (word.front() == ignore[i])
		word = word.substr(1);
		if (ignore[i] == NULL)
			break;
	}
	return word;
}