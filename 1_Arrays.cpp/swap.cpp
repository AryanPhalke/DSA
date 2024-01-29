#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int right = 5;
    int k=2;
    for (int i = 0; i < k; i++)
    {
        arr[right]==arr[i];
        right--;
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}