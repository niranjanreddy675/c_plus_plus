#include<iostream>
using namespace std;

int fibonacci(int n){

    if(n<=1){
        return 1;
    }
    return (n-2) + (n-1);

}
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the number at position"<<a<<"is"<<fibonacci(a)<<endl;

return 0;
}