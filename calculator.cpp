/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    int num1,num2,res;
    cout<<"Choose operation +,-,*,/ ";
    cin>>op;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    if(op=='+')
    {
        res=num1+num2;
        cout<<"Adittion of numbers is: "<<res;
    }
    else if(op=='-')
    {
        res=num1-num2;
        cout<<"Subtraction of numbers is: "<<res;
    }
    else if(op=='*')
    {
        res=num1*num2;
        cout<<"Multipliaction of numbers is: "<<res;
    }
    else
    {
        res=num1/num2;
        cout<<"Division of numbers is: "<<res;
    }
}
