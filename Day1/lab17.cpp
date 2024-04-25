//Write a program to check entered number is Armstrong number or not.

#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int numDigits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, numDigits);
        num /= 10;
    }

    return originalNum == sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

/* #include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    if (isarm(n))
    {
        cout<<n<<" is a armsstrong"<<endl;
    }else{
        cout<<n<<"is not a armstrong"<<endl;
    }
    
}
int countdigit(int n){
    int count=0;
    while(n !=0){
        n/=10;
        count++;
    }return count;
}
bool isarm(int n){
    int org=n;
    int sum=0;
    int ndigits=countdigit(n);
    
    while (n!=0)
    {
        int digit=n%10;
        sum+=pow(digit,ndigits);
        n/=10;
    }return org;
} */