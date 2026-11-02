#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"hii"<<endl;
    }
};

class base2{
    public:
    void greet(){
        cout<<"hello"<<endl;
    }
};

class derived : public base1, public base2{
    public:
        void greet(){
            base1::greet();
        }
};
int main(){

    base1 b;
    base2 c;
    derived d;
    b.greet();
    c.greet();
    d.greet();

return 0;
}