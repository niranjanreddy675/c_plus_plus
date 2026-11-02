#include<iostream>
using namespace std;

class add{

    int a,b;

    public:
        void setdata(int n1, int n2){

            a = n1;
            b = n2;
        }

        void getdata(){
            int c = a+b;
            cout<<"the sum of two  numbers a and b is "<<c<<endl;;
        }
};
int main(){

    add a1,a2;

    a1.setdata(2,3);
    a1.getdata();

    a2.setdata(5, 3);
    a2.getdata();

    return 0;
}