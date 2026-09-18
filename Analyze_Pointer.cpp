#include<iostream>
using namespace std;

void analyze_pointer(int* ptr) {
	cout << "Address: " << ptr << endl;
	cout << "Actual Value: " << *ptr << endl;

}

int main() {
	int iValue = 34;
	cout << "Stack Memory: " << endl;
	analyze_pointer(&iValue);
	
	int *jValue = new int;
	*jValue = 65;
	cout << "Heap Memory: " << endl;
	analyze_pointer(jValue);
	return 0;
}