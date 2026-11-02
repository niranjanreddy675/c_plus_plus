#include <iostream>
using namespace std;
int main()
{

    int marks[4] = {35, 40, 56, 90};
    cout << "the value at marks[0] is" << marks[0] << endl;
    cout << "the value at marks[1] is" << marks[1] << endl;
    cout << "the value at marks[2] is" << marks[2] << endl;
    cout << "the value at marks[3] is" << marks[3] << endl;
    
//changing value of array;

    marks[2] = 80;

    cout<<"the new value of marks at marks[2] is"<<marks[2]<<endl;

    return 0;
}
