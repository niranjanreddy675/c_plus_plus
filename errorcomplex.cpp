#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    friend int lculatocar ::sumrealcomplex(complex o1, complex o2); 
    
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << "the number is" << a << "+" << b << "i" << endl;
    }
};

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }
};
int main()
{

    return 0;
}