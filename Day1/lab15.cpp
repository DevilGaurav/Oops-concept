//Write a  program to enter a number and print its reverse
#include <iostream>
using namespace std;


int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int reversedNum=0 ;
    
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }cout<<"reverse is "<<reversedNum<<endl;
    
    return 0;
}

    
    

