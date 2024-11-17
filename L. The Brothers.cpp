#include<iostream>
#include<string.h>
using namespace std;
int main() {
	string Fname1, Sname1, Fname2, Sname2;
	cin >> Fname1 >> Sname1 >> Fname2 >> Sname2;
	if (Sname1 == Sname2 && Fname1 != Fname2) {
		cout << "ARE Brothers" << endl;
	}
	else {
		cout << "NOT" << endl;
	}
}