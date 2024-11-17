#include<iostream>
#include<math.h>
using namespace std;
int main(){

    double num1,num2;
    cin>>num1>>num2;
    double sumFloor=floor(num1/num2);
    double sumCeil=ceil(num1/num2);
    double sumRound=round(num1/num2);
        cout<<"floor "<<num1<<" / "<<num2<<" = "<<sumFloor<<endl;
        cout<<"ceil "<<num1<<" / "<<num2<<" = "<<sumCeil<<endl;
        cout<<"round "<<num1<<" / "<<num2<<" = "<<sumRound<<endl;

    return 0;
}