#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;


class user {
	string name;
	long uuid;
	long long int sector[3];
	double position[3];
	double velocity[3];

	//time units
	double seconds = 0;
	int years = 0;
	long long int eons = 0;
	long long int longTime = 0;

	public: user(string username) {
		name = username;
		for (int i=0; i < 3; i++) { sector[i] = 0; }
		for (int i=0; i < 3; i++) { position[i] = 0; }
		for (int i=0; i < 3; i++) { velocity[i] = 0; }
		uuid = 0;
	}
};


void testPointer(int* var) {
	*var = *var + 1;
}


void velocityIncrement(double v1[4], double deltaV[3], double* sum[4]) {
	// please note: all velocities are relative to the intial frame of references time scalar.
	// the time scalar measure how quickly time is passing relative to time at the origin (0, 0)

	
	
}


int main() {

	//user player = new player("testing");

	int status = 0;
	
	while (status >= 0)
	{
		status += 100;
		cout << to_string(status) + ' ';
	}
	cout << "\nprogram exited with status code " + to_string(status) + "\n\n";
	return 0;
}

