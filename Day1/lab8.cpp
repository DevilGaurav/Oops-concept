//to find whether it is a triangle or not

#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"enter angles of triangle"<<endl;
    cin>>a1>>a2>>a3;
    if(a1+a2+a3==180){
        cout<<"it is a triangle"<<endl;

    }else{
        cout<<"it is not a triangle"<<endl;
    }

}
