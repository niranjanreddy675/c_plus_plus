#include<iostream>
using namespace std;
int main(){

    int a = 4;
    int *ptr = &a;
    *ptr = 999;

    cout<<"the address of variable a is"<<&a<<endl;
    cout<<"the value at address of a is"<<*(ptr)<<endl;

    //here *ptr works as a dereferencing operator.

return 0;
}