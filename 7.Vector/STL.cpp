#include<iostream>
using namespace std;

void fun(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    // STATIC
    // int arr[5] = {1,2,3,4,5};
    // fun(arr,5);
    
    // DYNAMIC
    int n;
    cin>>n;

    int *arr = new int[n];


    for (int i = 0; i < n; i++)
    {
        int data;
        cin>>data;
        arr[i] = data;
    }
    
    arr[n]=80;

    fun(arr,n);
    
    return 0;
}