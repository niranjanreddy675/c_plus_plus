//prototyping:-it is used to tell the compiler that the function is available after the code

//syntax:- type function name(argument)
#include<iostream>

using namespace std;

int sum(int a,int b);

int main(){

    int num1,num2;
    cout<<"enter the value of num1"<<endl;
    cin>>num1;
    cout<<"enter the value of num2"<<endl;
    cin>>num2;
    cout<<"the sum of a+b is"<<sum(num1,num2);

return 0;
}
int sum(int a, int b){
    int c = a + b;
    return c;
}