#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n, int i){
    if(i>=n){
        return;
    }

    cout<<arr[i]<<" ";
    printArray(arr, n, i+1);

}

bool checkElement(int arr[], int size, int target, int i){
    if(i>=size){
        return false;
    }

    if(arr[i] == target){
        return true;
    }

    bool ans = checkElement(arr,size,target,i+1);

    return ans;

}

// void findMin(int arr[], int size, int index, int &mini){
//     //base case
//     if(index>=size){
//         return;
//     }

//     mini = max(mini, arr[index]);

//     findMin(arr,size, index+1, mini);
// }

void storeEven(vector<int> arr, int i){
    vector<int>ans;
    if(i>arr.size()){
        return;
    }
    if(arr[i] % 2 == 0){
        ans.push_back(arr[i]);
    }
    storeEven(arr,i+1);

    for (int num : ans) {
        cout << num << " ";
    }

}

void pritDigits(int num){
    if(num==0){
        return;
    }

    int digit = num%10;
    num = num/10;

    pritDigits(num);

    cout<<digit<<endl;
}

void findMax(int arr[], int size, int index, int &maxi){
    if(index>=size){
        return;
    }
    maxi = max(arr[index], maxi);

    findMax(arr,size,index+1,maxi);
}

// void printDouble(int arr[], int size, int index){
//     if(index>=size){
//         return;
//     }
//     arr[index] = 2* arr[index];
//     printDouble(arr,size,index+1);

// }

void findElement(int arr[], int i,int target, int size){
    if(i>=size){
        return ;
    }

    if(arr[i] == target){
        cout<<i<<endl;
    }

    findElement(arr,i+1,target,size);

}

int main()
{
    int n = 3245;
    pritDigits(n);

    // int arr[] = {40,30,40,40,50};
    // int size = 5;
    // int i = 0;

    // findElement(arr,i,40,size);
    // cout<<ans<<endl;
    // printDouble(arr,size,i);

    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }

    // vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // storeEven(arr1, 0);

    // int maxi = INT_MIN;
    // findMax(arr,size,i,maxi);
    // cout<<"Maximum element is  "<<maxi<<endl;
    // int target = 30;
    // cout<<checkElement(arr,size,target, i)<<endl;
    // printArray(arr,size, i);
    return 0;
}