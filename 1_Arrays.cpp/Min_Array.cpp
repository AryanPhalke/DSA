#include<iostream>
#include<limits.h>
using namespace std;

int mininarr(int arr[], int size){
    int minAns = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<minAns){
            minAns = arr[i];
        }
    }
    return minAns;
    
}
int main()
{
    int arr[]={5,6,7,98,2};
    int size = 5;

    int min = mininarr(arr,size);
    cout<<"Minimun Number is "<<min<<endl;


    return 0;
}