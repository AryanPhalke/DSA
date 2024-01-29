#include <iostream>
using namespace std;

int missingElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int diff = arr[mid] - mid;

        if (diff == 1)
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid-1;
        }
        mid = start + (end - start) / 2; 
    }
    // How to avoid the below by making changes in the above logic
    if(ans +1 == 0){
        return size+1;
    }
    return ans+1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int ans = missingElement(arr,size);
    cout<<ans<<endl;
    return 0;
}