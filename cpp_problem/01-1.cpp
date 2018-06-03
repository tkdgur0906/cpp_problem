#include <iostream>
using namespace std;

void plusOne(int &ref) {
	ref = ref + 1;
}

void changeSign(int &ref) {
	ref = -ref;
}

int main() {
	int temp = 10;
	plusOne(temp);
	cout << temp << endl;
	changeSign(temp);
	cout << temp << endl;
	}




