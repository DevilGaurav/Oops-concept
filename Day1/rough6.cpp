//suming of two array
#include<iostream>
using namespace std;
int main()
{
    int a1size,a2size,a3size;
    int pos;
    
    int arr[5]={1,2,3,4,5};

    int arr2[4]={6,7,8,9};

    a1size=sizeof(arr)/sizeof(arr[0]);
    a2size=sizeof(arr2)/sizeof(arr2[0]);
    a3size=a1size+a2size;
    int arr3[a3size];
    for(int i=0;i<a1size;i++)
    {
        arr3[i]=arr[i];

    }
    pos=a1size;
    for(int i=0;i<a2size;i++){
        arr3[pos]=arr2[i];
        pos++;
    }
    for(int i=0;i<a3size;i++){
        cout<<arr3[i]<<" ";
    }
}