#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

    ifstream in;
    string st;
    in.open("fileio.txt");
    
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }

return 0;
}