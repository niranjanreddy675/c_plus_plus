#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the id of the employee is" << id << "and this employee no. is"<< endl << count << endl;
    }

    static void getcount(void){
        cout<<"the value of count is"<<count<<endl;
    }
};

int Employee ::count = 1000;
int main()
{
    Employee harry, rohan, lovish;

    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lovish.setdata();
    lovish.getdata();
    Employee::getcount();

    return 0;
}