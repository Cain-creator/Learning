#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

const double M_PI = 3.14159265358979323846;

int main()
{
	int variableAlpha;
	cout << "Input value for alpha: ";
	cin >> variableAlpha;

	double radAlpha = variableAlpha * M_PI / 180.0;

	double z1, z2;

	double sec2variableAlpha = 1 / cos(2 * radAlpha);

	z1 = (cos(radAlpha) + sin(radAlpha)) / (cos(radAlpha) - sin(radAlpha));
	z2 = tan(2 * radAlpha) + sec2variableAlpha;

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}