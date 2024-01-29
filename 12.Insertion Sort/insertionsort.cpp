#include <iostream>
using namespace std;

int insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                //rukjao
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[j+1] = 
    return 0;
}