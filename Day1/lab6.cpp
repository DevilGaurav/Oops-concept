//display tax according to salary

#include<iostream>
using namespace std;
int main(){
    double n,tax;
    cout<<"enter a salary"<<endl;
    cin>>n;
    if(n<=150000){
        cout<<"Tax is O"<<endl;

    }else if(n>150000 && n<=300000){
        cout<<"Tax is 20%"<<endl;
        tax=n+((20/100)*n);
        cout<<"with tax it is : "<<tax<<endl;
    }else if (n>300000){
        cout<<"Tax is 30%"<<endl;
        tax=n+((30/100)*n);
        cout<<"with tax it is : "<<tax<<endl;
    }
}