/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void calculator(long long a,char operation,long long b){
    switch(operation){
        case '+':{
            long result=a+b;
            cout<<a << " + " <<b<< " is "<<result<<endl;
            cout<<"Thank You...."<<endl;
            cout<<"Ready for Next calculation"<<endl;
            break;
        }
        case '-':{
            long result=a-b;
            cout<<a << " - " <<b<< " is "<<result<<endl;
            
            cout<<"Thank You...."<<endl;
            cout<<"Ready for Next calculation"<<endl;
            break;
        }
        case '*':{
            long long result=a*b;
            cout<<a << " * " <<b<< " is "<<result<<endl;
            cout<<"Thank You...."<<endl;
            cout<<"Ready for Next calculation"<<endl;
            break;
        }
        case '/':{
            long result=a/b;
            cout<<a << " / " <<b<< " is "<<result<<endl;
            cout<<"Thank You...."<<endl;
            cout<<"Ready for Next calculation"<<endl;
            break;
        }
        default:{
            cout<<"Enter the valid operation"<<endl;
            cout<<"Try Again"<<endl;
        }
    }
}
int main(){
    cout<<".........welcome to Make_it_Easy World............"<<endl;
    cout<<"You can perform operation like + - * /"<<endl;
    cout<<"Enter The 1st Number"<<endl;
    long long num1;
    cin>>num1;
    cout<<"Enter The Operation To Perform"<<endl;
    char ch;
    cin>>ch;
    cout<<"Enter the 2nd number"<<endl;
    long long num2;
    cin>>num2;
    calculator(num1,ch,num2);
}