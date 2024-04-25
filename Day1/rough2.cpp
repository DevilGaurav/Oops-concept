//first 50 prime number
#include<iostream>
using namespace std;
int main()
{
    int f;

    for(int i=1;i<=50;i++){
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