//PRN: 22070123102
//Exp-2

//Program-1
#include<iostream>
using namespace std;

int main() {
    int num1, num2, sum=0;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    sum=num1+num2;
    cout<<"Sum of given numbers = "<<sum;

    return 0;

    /*OUTPUT
    PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp1_2.cpp -o exp1_2 } ; if ($?) { .\exp1_2 }
    Enter first number: 23
    Enter second number: 49
    Sum of given numbers = 72 */

}
