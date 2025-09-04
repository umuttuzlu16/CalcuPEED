#include <iostream>
#include <cmath>

using namespace std;

float speed(float x, float t){
	return x / t;
}

float acceleration(float vf, float vl, float t) {
	return (vl - vf) / t;
}

int main() {
	cout << "---WELCOME TO CalcuSPEED---" << endl << endl << endl;
	int choice = -1;

	while (choice != 0) {
		cout << "1 - Speed Calculation" << endl;
		cout << "2 - Acceleration Calculation" << endl;

		cout << "Calculation: ";
		cin >> choice;
		cout << endl;

		if (choice == 1) {
			float x,t;

			cout << "Distance Travelled (km): ";
			cin >> x;
			cout << endl;

			cout << "Travel Time (h): ";
			cin >> t;
			cout << endl;

			cout << "Speed: " << speed(x, t) << " km/h" << endl << endl;
		}

		if (choice == 2) {
			float vf, vl, t;


			cout << "First Speed (km/h): ";
			cin >> vf;
			cout << endl;

			cout << "Last Speed (km/h): ";
			cin >> vl;
			cout << endl;

			cout << "Time (h): ";
			cin >> t;
			cout << endl;

			cout << "Acceleration: " << acceleration(vf, vl, t) << " km/2h" << endl << endl;
		}
	}
	

	return 0;
}