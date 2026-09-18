#include<iostream>
#include<String>
using namespace std;

int main() {
	string* str = new string;

	cout << "Enter String you want to be reversed: ";
	getline(cin, *str);

	int length = str->length();


	char* start = &(*str)[0];
	char* end = &(*str)[length - 1];

	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

	cout << "Reversed String: " << *str;

	delete[] str;
	return 0;
}