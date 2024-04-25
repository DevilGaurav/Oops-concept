#include<iostream>
using namespace std;
int main()
{
    char lower,upper;
    cout<<"enter char"<<endl;
    cin>>lower;
    for(int i=97;i<=123;i++){
        upper=lower-32;
    }
    cout<<"upper is "<<upper<<endl;
}
    // char a;
    // int n,m;

    // cout<<"enter character "<<endl;
    // cin>>a;
    // n=a;
    // if (n>=97 && n<123){
    //     a=n-32;
    //     cout<<"reverse case is "<< a<<endl;
    // }else if(n>=65 && n<91){
    //     a=n+32;
    //     cout<<"reverse case is "<< a<<endl;
    // }else{
    //     cout<<"invalid"<<endl; 
    // }
