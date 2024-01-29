#include<iostream>
using namespace std;

void func(int A[][5]){
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            swap(A[i][j],A[j][i]);
        }
        
    }
    
}

int main()
{
    int arr[][5] ={
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };

    func(arr);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}