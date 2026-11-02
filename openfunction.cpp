#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream out;
    out.open("fileio.txt");
    out<<"this is me"<<endl;
    out<<"this is also me"<<endl;
    out.close();

return 0;
}