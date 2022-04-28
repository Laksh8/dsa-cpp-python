#include<iostream>

using namespace std;

int main() {

	int n = 3;

	// part 1
	for(int i=1; i<=2*n-1; i++) {
		cout << "*\t";
	}

	cout << endl;

	// part 2
	for(int i=1; i<n; i++) {
		// print (n-i) stars
		for(int j=1; j<=n-i; j++) {
			cout << "*\t";
		}
		// print (2i-1) spaces
		for(int j=1; j<=2*i-1; j++) {
			cout << "\t";
		}
		// print (n-i) stars
		for(int j=1; j<=n-i; j++) {
			cout << "*\t";
		}
		cout << endl;
	}

	// part 3
	for(int i=2; i<n; i++) {
		// print i stars
		for(int j=1; j<=i; j++) {
			cout << "*\t";
		}

		// print 2*(n-i)-1 spaces
		for(int j=1; j<=2*(n-i)-1; j++) {
			cout << "\t";
		}

		// print i stars
		for(int j=1; j<=i; j++) {
			cout << "*\t";
		}

		cout << endl;
	}

	// part 4
	for(int i=1; i<=2*n-1; i++) {
		cout << "*\t";
	}

	return 0;
}