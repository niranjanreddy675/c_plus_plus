#include<iostream>
using namespace std;

//volume of cylinder
float volume(double r,int h){
    return(3.14*r*r*h);
}

//volume of cube
int volume(int a){
    return(a*a*a);
}

//rectangular box
int volume(int l,int b, int h){
    return(l*b*h);
}

int main(){
    
    cout<<"the volume of cylinder is of sides 3 amnd 4 is"<<volume(3,4)<<endl;
    cout<<"the volume of cube of sides 3 is"<<volume(3)<<endl;
    cout<<"the volume of rectangular box of sides 3,5 and 6"<<volume(3,5,7)<<endl;
return 0;
}