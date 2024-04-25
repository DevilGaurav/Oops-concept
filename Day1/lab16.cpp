//Write a  program to print all Prime numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
    int f;
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){
        f=0;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                f++;
                break;
            }
        }if (f==0)
        {
            cout<<i<<endl;
        }

    }
}