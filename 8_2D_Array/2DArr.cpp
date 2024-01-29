#include<iostream>
using namespace std;

void printArray(int arr[][4],int row,int col){
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout<<arr[j][i]<<" "; 
        }
        cout<<endl;
    }
}

bool findTarget(int arr[][4],int row,int col,int target){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] == target){
                return true;
            }
        }
        
    }
    return false;
    
}

int main()
{
    // Creating a 2D Array
    // int arr[3][4] {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };

    // int arr[][4] {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };
    // int rows = 3;
    // int cols = 4;
    // printArray(arr,rows,cols);
    
    // int arr1[2][2];
    // int row=2;
    // int col=2;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cin>> arr1[i][j];
    //     }
        
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<< arr1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    int arr[][4] {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };

    int row  =3;
    int col = 4;

    int target = 11;

    cout<<"Found or not "<<findTarget(arr, row, col, target);
    return 0;
}