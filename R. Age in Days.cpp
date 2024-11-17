//Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective
//message "years", "months", "days".
//Note: consider the whole year has 365 days and 30 days per month.
#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;

	int year = num / 365;
	int month = (num % 365) / 30;
	int day = (num % 365) % 30;

	cout << year <<" years"<< endl;
	cout << month << " months" << endl;
	cout << day << " days" << endl;









	return 0;
}