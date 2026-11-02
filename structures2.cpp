#include<iostream>
using namespace std;

typedef struct employee
{
    int eID;
    char favchar;
    float salary;
}ep;

int main()
{
    ep harry;
    ep niranjan;
    ep navatej;

    harry.eID = 2;
    harry.favchar ='a';
    harry.salary = 1300;
    
    niranjan.eID = 3;
    niranjan.favchar ='a';
    niranjan.salary = 1300;

    navatej.eID = 4;
    navatej.favchar ='a';
    navatej.salary = 1300;

    cout << "the employee id of harry is" << harry.eID << endl;
    cout << "the fav char of harry is" << harry.favchar << endl;
    cout << "the salary of harry is" << harry.salary << endl;

    cout << "the employee id of niranjan is" <<niranjan.eID << endl;
    cout << "the fav char of niranjan is" << niranjan.favchar << endl;
    cout << "the salary of niranjan is" << niranjan.salary << endl;

    cout << "the employee id of navatej is" <<navatej.eID << endl;
    cout << "the fav char of navatej is" << navatej.favchar << endl;
    cout << "the salary of navatej is" << navatej.salary << endl;

    return 0;
}