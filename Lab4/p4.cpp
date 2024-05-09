/* Create a class Book with data members as bname,id,author,price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that class. */


#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    double price;

public:

    Book() {
        bname = "";
        id = 0;
        author = "";
        price = 0.0;
    }

    Book(string name, int bookId, string auth, double bookPrice) {
        bname = name;
        id = bookId;
        author = auth;
        price = bookPrice;
    }

    string getBname() {
        return bname;
    }

    void setBname(string name) {
        bname = name;
    }

    int getId() {
        return id;
    }

    void setId(int bookId) {
        id = bookId;
    }

    string getAuthor() {
        return author;
    }

    void setAuthor(string auth) {
        author = auth;
    }

    double getPrice() {
        return price;
    }

    void setPrice(double bookPrice) {
        price = bookPrice;
    }

    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    
    Book book1; 
    Book book2("Introduction to C++", 101, "John Doe", 29.99); 

    cout << "Initial Information for Book 1:" << endl;
    book1.display();
    cout << endl;

    cout << "Initial Information for Book 2:" << endl;
    book2.display();
    cout << endl;

    book1.setBname("Data Structures and Algorithms");
    book1.setId(201);
    book1.setAuthor("Jane Smith");
    book1.setPrice(39.99);

    cout << "Updated Information for Book 1:" << endl;
    book1.display();
    cout << endl;

    cout << "Accessing Information for Book 2 using getters:" << endl;
    cout << "Book Name: " << book2.getBname() << endl;
    cout << "ID: " << book2.getId() << endl;
    cout << "Author: " << book2.getAuthor() << endl;
    cout << "Price: $" << book2.getPrice() << endl;

    return 0;
}
