#include<iostream>
using namespace std;
class student{
    protected:
    int roll_number;

    public:
    void set_roll_number(int);
    void get_roll_number();
};

void student :: set_roll_number(int r){
    roll_number = r;
}

void student :: get_roll_number(){
    cout<<"your roll number of the is"<<roll_number<<endl;
}

class marks : public student{
    protected:
    float maths;
    float physics;

    public:
    void set_marks(float, float);
    void get_marks(void);

};

void marks :: set_marks(float m1, float p1){
    maths = m1;
    physics = p1;
}

void marks :: get_marks(void){
    cout<<"your marks in maths is"<<maths<<endl;
    cout<<"your marks in physics is"<<physics<<endl;
}

class results : public marks{
    float percentage;

    public:
    void display_result(){
        cout<<"your percentage in maths and physics exam is"<<(maths + physics)/2<<"%"<<endl;
    }

};
int main(){

    results niru;
    niru.set_roll_number(144);
    niru.get_roll_number();
    niru.set_marks(98.5,100);
    niru.get_marks();
    niru.display_result();

return 0;
}