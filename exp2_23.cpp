//PRN: 22070123102
//Exp-2

#include<iostream>
using namespace std;

int main() {

//Program-2
    /*bool image_colour=true;
    if(image_colour){
        cout<<"Yes, the image is colourful"<<endl;
    }
    else{
        cout<<"Image is black and white"<<endl;
    }
    */
    /*OUTPUT
    PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp2_23.cpp -o exp2_23 } ; if ($?) { .\exp2_23 }
    Yes, the image is colourful */

//Program-3
    int num1, num2;
    cout<<"Enter number-1: ";
    cin>>num1;
    cout<<"Enter number-2: ";
    cin>>num2;

    if(num1>num2){
        cout<<num1<<" is greater";
    }
    else{
        cout<<num2<<" is greater";
    }
    
    return 0;

    /*OUTPUT
    PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp2_23.cpp -o exp2_23 } ; if ($?) { .\exp2_23 }
    Enter number-1: 23
    Enter number-2: 98
    98 is greater */
    
}
