// #include <iostream>
// using namespace std;
// int main (){
//     cout << "Enter a number"<<endl;
//     int num;
//     cin>>num;
//     cout << "Entered number is :" << num;

//     return 0;
// }

// Write a code to add two number 
// #include <iostream>
// using namespace std;
// int main (){
//     cout<< "Enter two numbers :";
//     int num1 , num2;
//     cin>>num1>>num2;
//     cout << "Sum of both number is :"<< num1+num2 ;


//     return 0 ;

// }

// swap a number using third variable
#include <iostream>
using namespace std;
int main (){
    int num1,num2,temp1;
    cin>> num1 >> num2;
    cout<<"value of num1 : "<<  num1 <<endl;
    cout<<"value of num2 : "<<  num2 <<endl;

    temp1 = num1;
    num1 = num2;
    num2 = temp1;

    cout<<"value of num1 : "<<  num1 <<endl;
    cout<<"value of num2 : " <<  num2 << endl;

    return 0;
}

