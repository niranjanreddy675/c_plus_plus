#include<iostream>
using namespace std;

void swapReferencevar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a =4,b=5;

    cout<<"the value of a is "<<a<<"and the value of b is"<<b<<endl;
    swapReferencevar(a,b);
    cout<<"the value of a is"<<a<<"the value of b is"<<b<<endl;

return 0;
}