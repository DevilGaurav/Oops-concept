//Accept a single digit from the user and display it in words. For example, if digit entered is 9, display Nine.
#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    switch (n)
    {
    case 1 :n=1;
    cout<<"number is one"<<endl;
    break;
    case 2 :n=2;
    cout<<"number is two"<<endl;
    break;
    case 3 :n=3;
    cout<<"number is three"<<endl;
    break;
    case 4 :n=4;
    cout<<"number is four"<<endl;
    break;
    case 5 :n=5;
    cout<<"number is five"<<endl;
    break;
    case 6 :n=6;
    cout<<"number is six"<<endl;
    break;
    case 7 :n=7;
    cout<<"number is seven"<<endl;
    break;
    case 8 :n=8;
    cout<<"number is eight"<<endl;
    break;
    case 9 :n=9;
    cout<<"number is nine"<<endl;
    break;
    default:cout<<"invalid"<<endl;
        break;
    }


}


    // char n;
    // int a;
    // cout<<"enter character "<<endl;
    // cin>>n;
    // a=n;
    // if (a>=65 && a<91 ){
    //     cout<<"char is uppercase alphabet"<<endl;

    // }else if(a>=97  && a<123){
    //     cout<<"char is lowercase alphabet"<<endl;
    // }else{
    //     cout<<"not an alphabet"<<endl;
    // }
    
