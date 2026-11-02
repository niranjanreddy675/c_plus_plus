#include<iostream>
#include<fstream>
using namespace std;
int main(){

    string st = "niranjan";
    ofstream out("fileio.txt");
    out<<st;
return 0;
}