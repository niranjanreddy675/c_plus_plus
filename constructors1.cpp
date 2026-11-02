#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void); // constructor.
    void printnumber()
    {
        cout << "your number is" << a << "+" << b << "i" << endl;
    }
};

complex ::complex(void) // default construtor.
{
    a = 10;
    b = 0;
}

int main()
{

    complex c;
    c.printnumber();

    return 0;
}