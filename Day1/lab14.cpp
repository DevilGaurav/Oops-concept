//Write a  program to find sum of all even and odd numbers between 1 to n.
#include<iostream>
using namespace std;
int main(){
    int n,sumofeven=0,sumofodd=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sumofeven+=i;
            
        }else{
            sumofodd+=i;
            
        }
    }cout<<"sum of even number is "<<sumofeven<<endl;
        cout<<"sum of odd number is "<<sumofodd<<endl;
}
