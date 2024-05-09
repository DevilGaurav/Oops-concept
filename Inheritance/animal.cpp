/* Animal Hierarchy:
Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of animals. */

#include<iostream>
#include<string>
using namespace std;

class animal{
    protected:
    string  name,colour;
    int life;
    public:animal(){
        name="dog";
        colour="brown";
        life=10;

    }
    animal(string name,string colour,int life){
        this->name=name;
        this->colour=colour;
        this->life=life;
    }
    virtual void display(){
        cout<<"Animal name is "<<name<<" its colour is "<<colour<<" its life is "<<life<<endl;
    }
};
class Mammel:public animal{
    private:string habitat;
    public:Mammel(){
        habitat="domestic";

    }Mammel(string name,string colour, int life,string habitat):animal(name,colour,life){
        this->habitat=habitat;

    }void display(){
        animal::display();
            cout<<"this mammel is  "<<habitat<<endl;
    }
};
class Bird:public animal{
    private:int winglength;
    public:Bird(){
        winglength=20;

    }Bird(string name,string colour, int life,int winglength):animal(name,colour,life){
        this->winglength=winglength;

    }void display(){
        animal::display();
        cout<<"this bird wing length is  "<<winglength<<endl;
    }
};
int main(){
    animal a1;
    a1.display();
    animal a2("lion","yellow",12);
    a2.display();
    
    Mammel m1;
    m1.display();
    Mammel m2("elephant","grey",20,"wild");
    m2.display();


    Bird b1;
 //   b1.display();
    Bird b2("parrot","green",3,15);
    b2.display();

}