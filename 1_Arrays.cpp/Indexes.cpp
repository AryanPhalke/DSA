#include<iostream>
using namespace std;
int main()
{
    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>> arr[i] ;
    // }
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    
    // int arr[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Taking input for index "<< i <<" ";
    //     cin>>arr[i];
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"Array is "<< 2*arr[i]<<endl;
    // }

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    
    
    return 0;
}