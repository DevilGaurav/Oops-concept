/* Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.  */

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int dd ;
    int mm;
    int yy;

public:
   
    Date() {
        dd = 1;
        mm = 1;
        yy = 111;
    }

    Date(int d, int m, int y) {
        this->dd=d;
        this->mm=m;
        this->yy=y;
    }

    int getday() {
        return dd;
    }

    void setday(int d) {
       dd=d;
    }

    int getmonth() {
        return mm;
    }

    void setmonth(int m) {
        mm=m;
    }

    int getyear() {
        return yy;
    }

    void setyear(int y) {
        yy=y;
    }

    void display() {
        cout << "Day " << dd << endl;
        cout << "month " << mm << endl;
        cout << "year: " << yy << endl;
    }
};

int main() {

    Date d1; 
    Date d2(12, 3, 2024);

    d1.display();
    d2.display();
    
    d1.setday(25);
    d1.setmonth(8);
    d1.setyear(2023);

    cout << "Updated Date 1:" << endl;
    d1.display();
    cout << endl;

    cout << " Date 2 using getters:" << endl;
    cout << "Day: " << d2.getday() << endl;
    cout << "Month: " << d2.getmonth() << endl;
    cout << "Year: " << d2.getyear() << endl;

  
    return 0;
}
