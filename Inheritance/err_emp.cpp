
#include <iostream>
#include <string>
using namespace std;


class Employee
{
protected:
    string name;
    int empid;
    int salary;

public:
    Employee()
    {  
        string name = "ram";
        int empid = 1;
        int salary = 0;
    }
    Employee(string n, int id, int sal)
    {
        this->name = n;
        this->empid = id;
        this->salary = sal;
    }
    //virtual int calsalary(){
        // cout << "salary of employee" << endl;
    
    virtual void display(){
        cout << "employee name " << name << " id " << empid << " salary " << salary << endl;
    }
};

class Manager : public Employee
{
    int bonus;

public:
    Manager(){
        bonus = 0;
        cout<<"default";
    }
    Manager(string name, int empid, int salary, int bonus):Employee(name,empid,salary)
    {
        this->bonus = bonus;
    }
    void display(){
        cout << "employee name " << name << " id " << empid << " salary " << salary <<" bonus "<< salary + bonus << endl;
    }
   
};


int main()
{
    Employee e1("abc", 101, 10000);
    e1.display();
    //e1.display("raju", 102, 10000);
    Manager m1("abc", 101, 10000,100);
    m1.display();

    Employee e2;
    e2.display();

    Manager m2;
    m2.display();

    return 0;
}