// Given a number X. Determine in which of the following intervals the number X belongs to:
//[0,25], (25,50], (50,75], (75,100]
/*
    if X belongs to any of the above intervals print "Interval " followed by the interval.
    if X does not belong to any of the above intervals print "Out of Intervals".
    The symbol '(' represents greater than.
    The symbol ')' represents smaller than.
    The symbol '[' represents greater than or equal.
    The symbol ']' represents smaller than or equal.
*/
#include<iostream>
using namespace std;
int main() {
    float num1;
    cin >> num1;
    if (num1 >=0&&num1<=25) {
        cout << "Interval [0,25]" << endl;
    }
    else if (num1 > 25 && num1 <= 50) {
        cout << "Interval (25,50]" << endl;
    }
    else if (num1 > 50 && num1<= 75) {
        cout << "Interval (50,75]" << endl;

    }
    else if (num1 > 75 && num1 <= 100) {
        cout << "Interval (75,100]" << endl;

    }
    else {
        cout << "Out of Intervals" << endl;
    }

}
