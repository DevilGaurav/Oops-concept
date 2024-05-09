/* Employee Inheritance:
Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class. */

#include <iostream>
#include <string>
using namespace std;
class Emp{
    protected: int eid,salary;
    string name;
    public:
    Emp()
    {
        eid=0;
        name="abc";
        salary=0;
    }
    Emp(int eid,string name,int salary)
    {
        this->eid=eid;
        this->name=name;
        this->salary=salary;
    }
    virtual void display()
    {
        cout<<"eid: "<<eid<<" name: "<<name<<" salary: "<<salary<<endl;
    }

};

class Manager:public Emp{
    private: int bonus;
    public:
    Manager()
    {
        bonus=0;
    }
    Manager(int eid,string name,int salary,int bonus):Emp(eid,name,salary)
    {
        this->bonus=bonus;
    }
    void display()
    {
        Emp::display();
        bonus+= salary;
        cout<<"salary after bonus is: "<<bonus;
    }


};

int main()
{
    Emp e1(22,"mmd",10000);
    e1.display();
    Manager m1(90,"kkk",10000,1000);
    m1.display();
}
/*  */
//}