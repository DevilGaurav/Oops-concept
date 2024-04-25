//Write a program to find m to the power n
#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    int num=1;
    cout<<"enter a number m to the power n"<<endl;
    cin>>m>>n;
    for(int i=0;i<n;++i){
        num*=m;
    }
    cout<<"m to power n is "<<num<<endl;

}