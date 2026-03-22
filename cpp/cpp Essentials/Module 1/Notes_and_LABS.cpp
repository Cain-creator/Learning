//This is one of my learning course works, from Cisco Networking Academy, C++ Essentials 1
//It starts as a basic "Hello World!" and will be upgraded further, throughout the course.
//When the course will end, I will leavi it as it is.

#include <iostream>
#include <string>
#include <Windows.h> //for text color change
using namespace std;

//Function declarations

int LAB1();
void helloWorld();
string askName();
int LAB2();
int LAB3();

int main()
{
	//Handle to the console and color change
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 2);

	//Call the functions
	helloWorld();
	cout << endl;
	int result = LAB1();
	cout << endl;
	string ask = askName();
	cout << endl;
	int lab2 = LAB2();
	cout << endl;
	int lab3 = LAB3();
	

	return 0;
}

string askName() 
{
	string name;
	cout << "What is your name? ";
	cin >> name;
	cout << endl;
	cout << "Nice to meet you, " << name << "!" << endl;

	return name;
}
void helloWorld()
{
	cout << "Hello world!" << endl;
	cout << "I am your first project!" << endl;
}

//All the LAB's are tasks from this module, that were obligatory. Previous tasks were used to explain things and were optional
int LAB1()
{
	int i, j, k;
	i = 13;
	j = 5;
	k = i % j;
		
	cout << "Did you know, that reminder of K = 13 % 5; K = " << k << "?" << endl;

	return k;
}

int LAB2()
{
	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	y = (x * x) / ((pi * pi) * ((x * x) + 0.5)) * (1 + ((x * x) / ((pi * pi)*(((x * x) - 0.5) * ((x * x) - 0.5)))));


	cout << "y = " << y;
	return y;
}

int LAB3()
{
	int q, w, e;
	cout << "Enter q: ";
	cin >> q;
	cout << "Enter w: ";
	cin >> w;

	// increment q by 2
	q += 2;
	// decrement w by q
	w -= q;
	// divide q by w giving e
	e = q / w;
	//increment e by e
	e += e;
	//decrement e by 1
	e -= 1;
	// assign e modulo q to w
	w = e % q;
	// increment e by e added to q
	e += (e + q);
	// increment e by e divided by w
	e += (e / w);
	//assign e times e times e to e
	e = e * e * e;
	// increment e by q times w;
	e += (q * w);
	cout << e << endl;
	return e;
}
