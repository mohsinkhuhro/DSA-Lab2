#include <iostream>
using namespace std;

int main() {
	const int size = 20;
	int* salArray = new int[size];
	int* ptr = salArray;
	// Input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter Salary for employee " << (i + 1) << ": ";
		cin >> *(ptr);
		ptr++;
	}
	ptr = salArray;
	 // Apply increment formula
	for (int i = 0; i < size; i++) { 
		*(ptr) = *(ptr) + *(ptr) / (i + 1);
		ptr++;
	}
	
	ptr = salArray;
		 // Display updated salaries
		 cout << "\nUpdated Salaries: ";
	 for (int i = 0; i < size; i++) {
		 cout << *(ptr) << " ";
		 ptr++;
	 }
	 
	 cout << endl;

	 // Deallocate dynamic memory
	 delete[] salArray;

	 return 0;
	 
}