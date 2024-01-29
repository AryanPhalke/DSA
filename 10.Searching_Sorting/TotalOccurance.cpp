#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] ==  target){
            ans = mid;
            end = mid-1;
        }
        else if(target<arr[mid]){
            end= mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOccurance(int arr[],int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(arr[mid] ==  target){
            ans = mid;
            start = mid+1;
        }
        else if(target<arr[mid]){
            end= mid-1;
        }
        else if(target>arr[mid]){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    int arr[] = {10,20,30,40,40,40,40,40,40};
    int size = 9;
    int target = 40;

    int last = lastOccurance(arr, 9, 40);
    cout<<last<<endl;

    int first  = firstOccurance(arr, 9, 40);
    cout<<first<<endl;
    
    int totaloccurance  = last - first +1;
    cout<<totaloccurance<<endl;
    return 0;
}