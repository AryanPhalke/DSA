#include<iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i];   
    }
    return ans;
}
int main()
{
    int arr[]={1,2,2};
    int size = 3;

    int finalAns = getUnique(arr,size);
    cout<<"The Unique element is "<<finalAns<<endl;
    

    return 0;
}