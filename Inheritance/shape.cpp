/* Shape Hierarchy:
Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry. */

#include<iostream>
#include<string>
using namespace std;

class Shape{
    protected:;
    public:
    virtual double area(){
        return 0;
    }
     virtual double preimeter(){
    return 0;
    }
};
class Circle:public Shape{
    private:int radius;
    const double pi=3.14;
    public:Circle(){
        double radius=0;
    }
    Circle(int r){
        this->radius=r;
    
    }
    double area(){
    //    Shape::area();
        double area;
        double rsq=radius*radius;
        area=pi*rsq;
        cout<<"Area of circle is "<<area<<endl;
        return area;

    }
    double perimeter(){
        double perimeter;
        perimeter=2*pi*radius;
        cout<<" perimeter is "<<perimeter<<endl;
        return perimeter;
    }
};
         
    //  Circle(double area,double perimeter,double pi,int radius):Shape(area,perimeter)
    // {
    //     this->radius=radius;
    // }
    // void display(){
    //     Shape::display();
    //     int rsq=r*r;
    //     area=pi*rsq;
    //     perimeter=2*pi*r;
    //     cout<<"Area of circle is "<<area<<" perimeter is "<<perimeter<<endl;
    // }

/* class Rectangle:public Shape{
    private:
    int length;
    int breadth;
    public:Rectangle(){
        int length =0;
        int breadth =0;

    }Rectangle(double area,double perimeter,int l,int b):Shape(area,perimeter)
    {
        this->length=l;
        this->breadth=b;
    }
    void display(){
        Shape::display();
        area=l*b;
        int addprem=l+b;
        perimeter=2*addprem;
        cout<<"Area of Rectangle is "<<area<<" perimeter is "<<perimeter<<endl;
    }
};
class Triangle:public Shape{
    private:int base;
    int height;
    int s1;
    int s2;
    int s3;

    public:Triangle(){
        int base=0;
        int height=0;
        int s1=0;
        int s2=0;
        int s3=0;
    }Triangle(double area,double perimeter,int b,int h,int s1,int s2,int s3):Shape(area,perimeter)
    {
        this->base=b;
        this->height=h;
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
    }
    void display(){
        Shape::display();
        area=0.5*b*h;
        perimeter=s1+s2+s3;
        cout<<"Area of circle is "<<area<<" perimeter is "<<perimeter<<endl;
    }
}; */

int main(){
    // Shape o1;
    // o1.display();


    Circle c1;
    c1.area();
    c1.perimeter();

    Circle c2(5);
    c2.area();
    c2.perimeter();

    // Rectangle r1;
    // r1.display;

    // Triangle t1;
    // t1.display();
}