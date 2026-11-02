#include<iostream>
#include<string.h>
//#include "file.cpp"
using namespace std;

class hero
{

    //by default access modifier is taken as a private

    private:
        int health;

    public:
        char level;
        char *name;
        // getter's and setter's

        //constructor is created by default when we create a object but, when we create out own constructor then default constructor then default constructor will be erased.
        //default constructor is created by the name of class.
        //constructor is always created by the name of the class only.

 hero(int health){
     cout<<"cons is called"<<endl;

     this -> health = health;
 }

 hero(int health,char level){
     cout<<"cons called"<<endl;
     this -> health = health;
     this -> level = level;
 }

       

    // hero(hero &temp){
    //       cout<<"copy cons called"<<endl;
    //       this -> health = temp.health;
    //       this -> level = temp.level;
    //   
    //   }

 void setname(char name[])
 {

     strcpy(this->name, name);
 }

        void print(){

            cout<<"[name:"<<this->name<<",";
            cout<<"health:"<<this->health;
            cout<<"level:"<<this->level<<"]";
        
        }

        void sethealth(int n)
        {
            health = n;
        }

    void setlevel(char m){
        level = m;
    }

    int gethealth(){
        //cout<<health;
        return health;
    }

    char getlevel(){
        //cout<<level;
        return level;
    }

};

int main(){

    hero a(12,'d');

    a.sethealth(1);
    a.setlevel('b');
   
    char name[20] = "niranjan";
    a.setname(name);
    a.print();

    hero b(a);
    a.print();

   a.name[0] = 'd';
   a.print();

    b.print();




















    // hero s(10,'b');
    // s.print();
    //
    // hero b(s);
    // b.print();

    /*hero h1;
     cout<<"size is"<<sizeof(h1);

     hero a(10);
     hero c(10,'b');

     cout<<c.gethealth()<<endl;
     cout<<c.getlevel()<<endl;

     //here when we create a object then the constructor is called by default like --> a.hero().

     //cout<<sizeof(niranjan)<<endl;

    // a.sethealth(60);
     a.setlevel('b');

     cout<<a.gethealth()<<endl;
     cout<<a.getlevel()<<endl;


     hero *b = new hero(4);

    // b -> sethealth(90);
     b -> setlevel('a');

     cout<<(*b).getlevel()<<endl;
     cout<<(*b).gethealth()<<endl;


     cout<<b -> gethealth()<<endl;
     cout<<b -> getlevel()<<endl;
   niranjan.sethealth(15);
     niranjan.setlevel('a');

    cout<< niranjan.gethealth()<<endl;
     cout<<niranjan.getlevel();*/

    //   niranjan.level = 'a';

    // cout<<niranjan.level;*/

    return 0;
}