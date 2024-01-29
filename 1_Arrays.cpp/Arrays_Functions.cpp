#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

// present -> True
// absent -> False

bool linearSearch(int arr[], int size, int target){
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {2,4,6,8,10};
    int size = 5;

    printArray(arr,size);

    int target = 10;

    bool ans = linearSearch(arr, size, target);

    if(ans==1){
        cout<<"Target Found"<<endl;
    }
    else{
        cout<<"Target Not Found"<<endl;
    }
    return 0;
}