#include<iostream>
#include<fstream>
using namespace std;
int main(){

   ofstream hout("fileio.txt");
   string name;
   cout<<"enter your name :";
   cin>>name;
   hout<< name  + " is my name";
   hout.close();

   ifstream hin("fileio.txt");
   string content;
   hin>>content;
   cout<<"the content of the file is"<<content<<endl;
   hin.close();
return 0;
}