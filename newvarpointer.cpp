#include<iostream>
using namespace std;
int main(){

    int a = 4;
    int *p = new int(40);
    cout<<"the value at address p is"<<*(p)<<endl;
    cout<<"the address of the variable is"<<p<<endl;

return 0;
}