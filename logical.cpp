#include<iostream>
using namespace std;
int main()
{
    int a,b;
    a=4;
    b=5;
    cout << "the value of this logical and operator((a==b)&&(a<b)) is" << ((a == b) && (a < b));
    cout << "the value of this logical or operator((a==b)||(a<b))" << ((a == b) || (a < b));
    cout << "the value of this logical not operator((a==b)&&(a<b))" << !((a == b) && (a < b));
    return 0;
}