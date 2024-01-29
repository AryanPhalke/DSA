#include <iostream>
using namespace std;

int oddOccurance(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        if (mid & 1)
        {
            if (mid - 1 >= 0 && arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        else
        {
            if (mid + 1 < size && arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                ans = mid;
                e = mid;
            }
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 4, 3, 3, 5, 5};
    int size = 9;
    int ans = oddOccurance(arr, size);
    cout << ans << endl;
    return 0;
}