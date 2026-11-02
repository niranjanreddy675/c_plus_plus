#include<iostream>
using namespace std;

class b{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};

class d{
    public:
        void say(){
            cout<<"kaise hoo!!"<<endl;
        }
    };

    class derived : public d, public b{};
    

int main(){

    b B;
    B.say();

    d D;
    D.say();


return 0;
}