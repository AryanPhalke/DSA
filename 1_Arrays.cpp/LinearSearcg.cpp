#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,4,6,8,10};

    int target = 100;

    bool flag =0;

    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==target){
            flag = 1;
            break;
        }
    }
    
    if(flag ==1){
        cout<<"Target Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}