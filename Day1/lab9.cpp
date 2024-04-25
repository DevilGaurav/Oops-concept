///factorial of a number

#include<iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"enter a number"<<endl;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        fact*=i;
        
    }
    cout<<"factorial is "<<fact<<endl;
}