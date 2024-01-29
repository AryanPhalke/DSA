#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    cout<<"Address of a :"<<&a<<endl;
    cout<<"Address of a :"<<a<<endl;

    int b[5];
    cout<<"Base Address of b is :"<<&b<<endl;
    cout<<"Base Address of b is :"<<b<<endl;

    int arr[5]={1,2};
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<arr[3];
    
    return 0;
}