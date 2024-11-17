//Given a mathematical expression. The expression will be one of the following expressions: A+B, A−B, A∗B and A/B.
//Print the result of the mathematical expression. 
#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	char x;
	cin >> num1>>x >> num2;
	if (x == '+') {
		cout << num1 + num2 << endl;
	}
	else if (x == '-') {
		cout << num1 - num2 << endl;
	}
	else if (x == '/') {
		cout << num1 / num2 << endl;
	}
	else {
		cout << num1 * num2 << endl;
	}

}