#include<iostream>
using namespace std;
int main(){

int marks[] = {45,54,69,89};

int i = 0;

do{
    cout<<"the value of marks at"<<i<<"is"<<marks[i]<<endl;
    i++;
}while(i<4);

return 0;
}