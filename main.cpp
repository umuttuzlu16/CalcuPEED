#include <iostream>
#include <cmath>

using namespace std;

float speed(float x, float t){
	return x / t;
}

float acceleration(float xf, float xl, float t) {
	return (xl - xf) / t;
}

int main() {
	int choice = -1;

	while (choice != 0) {
		cout << "---WELCOME TO CalcuSPEED---" << endl << endl << endl;
		cout << "1 - Speed Calculation" << endl;
		cout << "2 - Acceleration Calculation" << endl;

		cout << "Calculation: ";
		cin >> choice;
		cout << endl;

		if (choice == 1) {
			float x;
			float t;

			cout << "Distance Travelled (km): ";
			cin >> x;
			cout << endl;

			cout << "Travel Time (h): ";
			cin >> t;
			cout << endl;

			cout << "Speed: " << speed(x, t) << "km/h" << endl;
		}
	}
	

	return 0;
}