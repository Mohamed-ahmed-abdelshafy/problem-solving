//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
//For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9. 
#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	int result =num/10;
	num = result / 10;
	result = num / 10;
	if (result % 2 == 0) {
		cout << "EVEN" << endl;
	}
	else {
		cout << "ODD" << endl;

	}

}