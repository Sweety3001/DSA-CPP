#include<bits/stdc++.h>
using namespace std;
// void printName(string name){
//     cout<<name;
// }
// int main(){
//     //void-> doesn't return anything
//     //return
//     //parameterised
//     // non parameterised


//     string name;
//     cin>>name;
//     printName(name);


//     int num1,num2;
//     cin>>num1>>num2;
//     int minimum= min(num1,num2);
//     // int maximum= max(num1,num2);
//     cout<<minimum;
//     return 0;

// }

// //pass by value
// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     doSomething(num);
//     cout<<num<<endl;
//     return 0;
// }

//pass by refernce
void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}