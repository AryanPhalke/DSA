#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    // while (left<=right)
    // {
    //     swap(arr[left],arr[right]);
    //     left++;
    //     right--;
    // }

    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void extremeElements(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
            break;
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    reverseArray(arr, size);
    cout << endl;
    extremeElements(arr, size);
    return 0;
}