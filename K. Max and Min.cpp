#include<iostream>
using namespace std;
int main(){
//Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
    int num1,num2,num3,min,max;
    cin>>num1>>num2>>num3;
    if(num1>num2){
       max=num1;
       min=num2;
        cout<<max<<" "<<min<<endl;
  }
    else if (num2>num3){
            max=num2;
            min=num3;
            cout<<max<<" "<<min<<endl;
    }
    else if (num3>num2){
            max=num3;
            min=num2;
            cout<<max<<" "<<min<<endl;
    }
    else{
            max=num3;
            min=num1;
            cout<<max<<" "<<min<<endl;
    }

    return 0;

}