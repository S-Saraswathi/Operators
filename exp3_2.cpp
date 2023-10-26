//PRN: 22070123102
//Exp-3

//Program-2
#include<iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5, total;
    float avg;
    cout<<"Enter subject-1 marks: ";
    cin>>m1;
    cout<<"Enter subject-2 marks: ";
    cin>>m2;
    cout<<"Enter subject-3 marks: ";
    cin>>m3;
    cout<<"Enter subject-4 marks: ";
    cin>>m4;
    cout<<"Enter subject-5 marks: ";
    cin>>m5;

    avg=(m1+m2+m3+m4+m5)/5;
    cout<<"Percentage: "<<avg<<"%"<<endl;
    if(avg>=90){
        cout<<"Grade: O";
    }
    else if(avg>=85 && avg<90){
        cout<<"Grade: A+";
    }
    else if(avg>=75 && avg<85){
        cout<<"Grade: A";
    }
    else if(avg>=65 && avg<75){
        cout<<"Grade: B+";
    }
    else if(avg>=55 && avg<65){
        cout<<"Grade: B";
    }
    else if(avg>=40 && avg<55){
        cout<<"Grade: C";
    }
    else{
        cout<<"Fail";
    }

    return 0;

/*PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp3_2.cpp -o exp3_2 } ; if ($?) { .\exp3_2 }
Enter subject-1 marks: 90
Enter subject-2 marks: 85
Enter subject-3 marks: 70
Enter subject-4 marks: 60
Enter subject-5 marks: 80
Percentage: 77%
Grade: A
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp3_2.cpp -o exp3_2 } ; if ($?) { .\exp3_2 }
Enter subject-1 marks: 90
Enter subject-2 marks: 95
Enter subject-3 marks: 99
Enter subject-4 marks: 98
Enter subject-5 marks: 96
Percentage: 95%
Grade: O
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp3_2.cpp -o exp3_2 } ; if ($?) { .\exp3_2 }
Enter subject-1 marks: 30
Enter subject-2 marks: 25
Enter subject-3 marks: 34
Enter subject-4 marks: 32
Enter subject-5 marks: 21
Percentage: 28%
Fail */
}