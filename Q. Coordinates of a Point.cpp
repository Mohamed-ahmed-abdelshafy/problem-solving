//Given two numbers X, Y which donate coordinates of a point in 2D plan. Determine in which quarter does it belong. 


//Note:
//Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
//Print "Origem" If the point is at the origin.
//Print "Eixo X" If the point is over X axis.
//Print "Eixo Y" if the point is over Y axis.
#include<iostream>
using namespace std;
int main() {
	float num1, num2;
	cin >> num1 >> num2;
	if (num1 == 0 && num2 == 0) {
		cout << "Origem" << endl;
	}
	else if (num1 >= 0.1 && num2 >= 0.1) {
		cout << "Q1" << endl;
	}
	else if (num1 <= 0.-1 && num2 >= 0.1) {
		cout << "Q2" << endl;
	}
	else if (num1 <=0.-1 && num2 <= 0.-1) {
		cout << "Q3" << endl;
	}
	else if (num1 >= 0.1 && num2 <= 0.-1) {
		cout << "Q4" << endl;
	}
	else if (num1>=0.1||num1<=0.-1&&num2==0) {
		cout << "Eixo X" << endl;
	}
	else {
		cout << "Eixo Y" << endl;
	}
}

