// ******************************************************
// PrintName program
// This program prints a name in two different formats
// ******************************************************
#include "stdafx.h"
#include <iostream> // for cout and endl
#include <string> // for data type string
using namespace std;
const string FIRST = "Herman"; // Person�s first name
const string LAST = "Smith"; // Person�s last name
const char MIDDLE = 'G'; // Person�s middle initial
int main()
{
	string firstLast; // Name in first-last format
	string lastFirst; // Name in last-first format
	firstLast = FIRST + " "+ LAST;
	cout << "Name in first - last format is " << endl
		<< firstLast << endl;
	lastFirst = LAST + "," + FIRST + ' ';
	cout << "Name in last - first format is " << endl
		<< lastFirst << MIDDLE << '.' << endl;
	system("pause");
	return 0;
}