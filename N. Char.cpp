//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. 
// Otherwise print the letter after converting it from uppercase letter to lowercase letter
#include<iostream>
using namespace std;
int main() {
	char x;
	cin >> x;
	char convaret;
	if (x >= 60 && x <= 90) {
		convaret = x + 32;
		cout << convaret << endl;
	}
	else if (x >= 97 && x <= 122) {
		convaret = x - 32;
		cout << convaret << endl;
	}
	else {
		return 0;
	}
}