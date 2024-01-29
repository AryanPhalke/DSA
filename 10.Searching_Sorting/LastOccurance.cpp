#include <iostream>
using namespace std;

int lastOccurance(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 40, 40, 40, 50};
    int size = 8;
    int target = 40;

    int ans = lastOccurance(arr, size, target);

    if (ans == -1)
    {
        cout << "Element not present" << endl;
    }
    else
    {
        cout << "Last Index of " << target << " is " << ans << endl;
    }
    return 0;
}