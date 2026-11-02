#include<iostream>
using namespace std;

struct employee
{
    int eID;
    char favchar;
    float salary;
};

int main(){
    struct employee harry;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 1200;

    cout << "the employee id of harry is" << harry.eID << endl;
    cout << "the fav char of harry is" << harry.favchar << endl;
    cout << "the salary of harry is" << harry.salary << endl;

        return 0;
}