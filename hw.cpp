#include<iostream>
#include<math.h>
using namespace std;

class calculator{
    int a;
    int b;
    public:
    void setdata(int, int);
    void getdata(void);
};

void calculator::setdata(int data1, int data2){
        a = data1;
        b = data2;

}

void calculator::getdata(){
    cout<<"the sum of a and b is"<<a+b<<endl;
    cout << "the product of a and b is" << a * b << endl;
    cout << "the difference of a and b is" << a - b << endl;
    cout << "the quotient of a and b is" << a / b << endl;
}

class scientificcalculator{
    int c;
    
    public:
    void set_data(int);
    void get_data();

};

void scientificcalculator::set_data(int num1){
    c = num1;
}

void scientificcalculator::get_data(){
    cout<<"the squareroot of c is"<<sqrt(c)<<endl;
    cout<<"the sin value of c is"<<sin(c)<<endl;
    cout<<"the log value of c is"<<log(c)<<endl;
}

class hybridcalculator : public calculator, public scientificcalculator{};
int main(){

    hybridcalculator calc;
    calc.setdata(5,4);
    calc.getdata();

    calc.set_data(1);
    calc.get_data();
return 0;
}