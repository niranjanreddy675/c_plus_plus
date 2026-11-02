//call by point now this will do swapping because the address of actual parametets are sent to the formal parameters which will lead to swapping
#include<iostream>
using namespace std;

void swappointer(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int a = 4,b = 5;
    cout<<"the value of a is"<<a<<"the value of b is "<<b<<endl;
    swappointer(&a,&b);
    cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;

return 0;
}