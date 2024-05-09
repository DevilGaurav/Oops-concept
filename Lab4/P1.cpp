/* 1:Write a program to create student class with data members rollno, marks1,mark2,mark3.
Accept data (acceptInfo()) and display  using display member function.
Also display total,percentage and grade. */

#include<iostream>
using namespace std;

class student
{
    private:
    int rollno,mark1,mark2,mark3,total ,percentage;
    public:
    
    void acceptinfo(){
        cout<<"enter roll no and marks in 3 subject"<<endl;
        cin>>rollno>>mark1>>mark2>>mark3;

    }
    void display()
    {
        total=mark1+mark2+mark3;
        percentage=(total/3);
        cout<<total<<" "<<percentage<<endl;
    }
    void grade ()
    {
        if(percentage>=90){
            cout<<"grade A"<<endl;
        }
        else if(percentage>=80){
            cout<<"grade B"<<endl;
        }
        else if(percentage>70){
            cout<<"grade C"<<endl;
        }
        else if(percentage>=60){
            cout<<"grade D"<<endl;
        }
        else{
            cout<<"grade Fail"<<endl;
        }
    }

};
int main()
{
    student stuobj;
    stuobj.acceptinfo();
    stuobj.display();
    stuobj.grade();

} 