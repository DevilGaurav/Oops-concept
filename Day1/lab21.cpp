//menuscript of add,sub,multiplication using switch case
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    //
    
    cin>>b;
    //
    
    cout<<"enter mode 1:add 2:sub 3:multiply "<<endl;
    cin>>c;
    switch (c)
    {
    case 1:c=a+b;
        cout<<"addition is"<<c<<endl;
        break;
    case 2:c=a-b;
        cout<<"Subtraction is "<<c<<endl;
        break;
    case 3:c=a*b;
        cout<<"multiplication is"<<c<<endl;
        break;

    
    default:cout<<"invalid"<<endl;
        break;
    }
}