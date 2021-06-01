#include <iostream>
#include <cmath>
#include <conio.h>

#define PI 3.141592654

/*  Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

using namespace std;

int main() {
	double result;
	float x = -31.6;
	int y = 3;

	result = atan2(y, x);

	cout << "atan2(y/x) = " << result << " radians" << endl;
	// Display result in degrees
	cout << "atan2(y/x) = " << result * 180 / PI << " degrees";

	_getch();
	return 0;
}