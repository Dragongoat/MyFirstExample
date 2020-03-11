#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void printWord(string word);

int main()
{
	printWord("Hi, ");
	printWord("please ");
	printWord("enter ");
	printWord("two ");
	printWord("numbers: ");

		int first = 0;
		int second = 0;

		cin >> first >> second;

    return 0;
}

void printWord(string word) {
	cout << word;	
}
