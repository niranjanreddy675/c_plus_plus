//using call by value - no swapping will be done beacuse just the value of actual parameters are sent to formal parameters which does not affect the program.

#include<iostream>
using namespace std;

void swap(int a, int b){
    
    int temp = a;
    a = b;
    b = temp;


}
int main(){

    int a=4,b=5;
    cout<<"the value of a is "<<a<<"and the value of b is"<<b<<endl;
    swap(a,b);
    cout<<"the value of a is"<<a<<"and the value of b is"<<b<<endl;


return 0;
}