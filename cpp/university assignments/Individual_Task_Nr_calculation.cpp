#include <iostream>
using namespace std;

int main()
{
	int studentCode, taskVarCount;
	cout << "Insert student code: " << endl;
	cin >> studentCode;
	cout << "Insert task variants count: " << endl;
	cin >> taskVarCount;

	int taskNr;
	taskNr = studentCode % taskVarCount;
	cout << "Your student code is: " << studentCode << endl;
	cout << "Task variant count is: " << taskVarCount << endl;
	cout << "Your variant is Nr. " << taskNr << endl;

	return 0;
}