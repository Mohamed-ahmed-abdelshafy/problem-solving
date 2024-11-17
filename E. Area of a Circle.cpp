#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double radius;
    cin>>radius;
    const double Pi=  3.141592653;
    double num=Pi*radius*radius;
    //Use setprecision(9) to print 9 digits after decimal point.
    cout << fixed << setprecision(9);
    cout<<num<<endl;
    return 0;
}