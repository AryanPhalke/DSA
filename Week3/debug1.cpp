#include <iostream>
using namespace std;
bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr [] = {1, 2, 5, 6, 7};
    int n = 5;
    int x = 4;
    cout<<hasArrayTwoCandidates(arr,n,x);

    return 0;
}