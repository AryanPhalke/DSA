#include <iostream>
using namespace std;

void transpose(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        for (int j = i; j < col; j++)
        {

            swap(arr[i][j], arr[j][i]);
        }
    }
}
int main()
{
    // int arr[][4] {
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    // };

    // int row  =3;
    // int col = 4;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // cout<<"Row Wise Sum: "<<endl;
    // for (int i = 0; i < row; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < col; j++)
    //     {
    //         sum = sum + arr[i][j];
    //     }
    //     cout<<"Row"<<i<<" Sum: "<<sum;
    //     cout<<endl;
    // }

    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < col; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < row; j++)
    //     {
    //         sum  = sum + arr[j][i];
    //     }
    //     cout<<"Col"<<i<<" Sum: "<<sum;
    //     cout<<endl;
    // }
    //     int sum = 0;

    // for (int i = 0; i < col; i++)
    // {
    //     for (int j = 0; j < row; j++)
    //     {
    //         if(i==j)
    //         {
    //             sum = sum + arr[i][j];
    //         }
    //     }
    // }
    //     cout<<sum;
    // int left = 3;
    // int right  = 0;

    int arr[][4] = {
        {2, 4, 6,7},
        {8, 3, 5,8},
        {7, 9, 1,9}};

    int row = 3;
    int col = 4;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of the matrix is: " << endl;

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = i; j < col; j++)
    //     {

    //         swap(arr[i][j], arr[j][i]);
    //     }
    // }

    // for (int i = 0; i < row; i++)
    // {

    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}