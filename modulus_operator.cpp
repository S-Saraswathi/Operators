//PRN: 22070123102
//Exp-3

//Program-1
#include<iostream>
using namespace std;

int main() {
    int num, n_num;
    cout<<"Enter last 5 digits of PRN: ";
    cin>>num;
    cout<<"Digits of PRN are:"<<endl;
    while(num>0){
        n_num=num%10;
        cout<<n_num<<endl;
        num=num/10;
    }

    return 0;

}
/*OUTPUT
Enter last 5 digits of PRN: 23102
Digits of PRN are:
2
0
1
3
2 */
