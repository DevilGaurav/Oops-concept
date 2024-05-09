/* 4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class.  */

#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
 
    Point() {
        x = 0.0;
        y = 0.0;
    }

    Point(double xVal, double yVal) {
        x = xVal;
        y = yVal;
    }

    double getX() {
        return x;
    }

    void setX(double xVal) {
        x = xVal;
    }

    double getY() {
        return y;
    }

    void setY(double yVal) {
        y = yVal;
    }

    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point point1; 
    Point point2(3.5, 2.0); 

    cout << "Initial Information for Point 1:" << endl;
    point1.display();
    cout << endl;

    cout << "Initial Information for Point 2:" << endl;
    point2.display();
    cout << endl;

    point1.setX(1.0);
    point1.setY(5.0);

    cout << "Updated Information for Point 1:" << endl;
    point1.display();
    cout << endl;

    cout << "Accessing Information for Point 2 using getters:" << endl;
    cout << "X-coordinate: " << point2.getX() << endl;
    cout << "Y-coordinate: " << point2.getY() << endl;

    return 0;
}
