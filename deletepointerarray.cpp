#include <iostream>
using namespace std;
int main()
{

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    delete [] arr;
    

    cout << "the value at arr[0] is" << arr[0] << endl;
    cout << "the value at arr[1] is" << arr[1] << endl;
    cout << "the value at arr[2] is" << arr[2] << endl;
    cout << "the value at arr[3] is" <<arr[3]<< endl;

    return 0;
}