/* Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.  */

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;

public:
   
    Person() {
        name = "";
        age = 0;
        city = "";
    }

    Person(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    string getName() {
        return name;
    }

    void setName(string n) {
        name = n;
    }

    int getAge() {
        return age;
    }

    void setAge(int a) {
        age = a;
    }

    string getCity() {
        return city;
    }

    void setCity(string c) {
        city = c;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {

    Person person1; 
    Person person2("John", 30, "New York"); 

    // cout << "Initial Information for Person 1:" << endl;
    // person1.display();
    // cout << endl;

    // cout << "Initial Information for Person 2:" << endl;
    // person2.display();
    // cout << endl;

    person1.setName("Alice");
    person1.setAge(25);
    person1.setCity("Los Angeles");

 //   cout << "Updated Information for Person 1:" << endl;
    person1.display();
 //   cout << endl;

    cout << "Accessing Information for Person 2 using getters:" << endl;
    cout << "Name: " << person2.getName() << endl;
    cout << "Age: " << person2.getAge() << endl;
    cout << "City: " << person2.getCity() << endl;

    return 0;
}
