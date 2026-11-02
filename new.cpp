#include<iostream>
using namespace std;
int main(){

int marks[] = {45,56,86,89};
//cout<<"the value of marks at maks[0] is"<<marks[0]<<endl;
//cout << "the value of marks at maks[1] is" << marks[1] << endl;
//cout << "the value of marks at maks[2] is" << marks[2] << endl;
//cout << "the value of marks at maks[3] is" << marks[3] << endl;
//cout << "the value of marks at maks[4] is" << marks[4] << endl;
//cout << "the value of marks at maks[5] is" << marks[5] << endl;

//for(int i = 0; i<6; i++){
  //  cout<<"the value of makrks at position" <<i<< "is"<<endl<<marks[i]<<endl;
//}
 //pointer arithmetic

//new address = current address + i*size of data type

int *p = marks;

cout<<"the value at*p is"<<*p<<endl;
//cout << "the value at*(p+1) is" << *(p+1)<< endl;
//cout << "the value at*(p+2) is" << *(p+2) << endl;
//cout << "the value at*(p+3) is" << *(p+3) << endl;




return 0;
}