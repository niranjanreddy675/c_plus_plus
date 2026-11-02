#include<iostream>

using namespace std;

int main()
{
    int age;
    cout<<"tell me your age:"<<endl;
    cin>>age;
    if((age > 18) && (age < 50))
    {
        cout<<"you can vote"<<endl;
    }
    else if(age == 18)
    {
        cout<<"you can not vote"<<endl;
    }
    
    else if(age >= 50)
    {
        cout<<"you are senior citizen"<<endl;
    }

    else
    {
        cout<<"you can vote for kids"<<endl;
    }
    return 0;

}