#include <iostream>
using namespace std;

class complex;

class calculator
{

public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
};

class complex
{

    int a, b;

public:
    friend int calculator :: sumrealcomplex(complex o1, complex o2);

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

int calculator :: sumrealcomplex(complex o1, complex o2)
{

    return (o1.a + o2.a);
}

int main()
{

    complex c1, c2;

    c1.setnumber(1, 4);
    c1.printnumber();

    c2.setnumber(5, 7);
    c2.printnumber();

    calculator calc;

    int res = calc.sumrealcomplex(c1, c2);
    cout << "the sum of real part of c1 and c2 is" << res << endl;

    return 0;
}