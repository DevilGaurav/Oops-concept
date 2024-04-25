//Check whether the number is palindrome or not?

#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    
    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}


/* #include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    if (ispalindrom(num))
    {
        cout<<num<<"is palindrom"<<endl;

    }else{
        cout<<num<<"is not palindrom"<<endl;
    }

}
bool ispalindrom(int num){
    int org=num;
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }return org==rev;
} */