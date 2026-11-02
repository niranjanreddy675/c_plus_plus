#include<iostream>
using namespace std;

float sum(float a,int b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

int main(){

    cout<<"the sum of 3 and 6 and 12 is"<<sum(3,6,12)<<endl;
    cout<<"the sum of 3.14,10 is"<<sum(3.14,10)<<endl;

return 0;
}