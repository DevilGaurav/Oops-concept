#include<iostream>
using namespace std;
int main()
{
    int num=0;
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if (arr[i]%2==0){
            num=arr[i];
            cout<<"number is even "<<num<<endl;
        }else{
            cout<<"number is odd "<<num<<endl;
        }
    }
    
}