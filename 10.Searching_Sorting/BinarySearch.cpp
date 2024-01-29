#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        // found
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;

    }

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int target = 90;
    int size = 9;

    int ansIndex = BinarySearch(arr, size, target);

    if(ansIndex == -1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at Index "<<ansIndex<<endl;
    }
    return 0;
}