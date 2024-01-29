#include<iostream>
using namespace std;

bool checkSorted(int arr[], int n, int i){
    if(i >= n){
        return true;
    }
    
    if(i > 0 && arr[i] > arr[i-1]){  // Check if i > 0 before comparing arr[i] with arr[i-1]
        bool aagekaAns = checkSorted(arr, n, i+1);
        return aagekaAns;
    }
    else{
        return false;
    }
}


// int binarySearch(int arr[], int start,int end, int n, int target){
//     int mid = (start+end)/2;
//     if(start>=end){
//         return -1;
//     }

//     if(arr[mid] ==  target){
//         return mid;
//     }
//     else if(target>arr[mid]){
//     return binarySearch(arr, mid+1,end,n, target);
//     }
//     else{
//     return binarySearch(arr, start,mid-1,n, target);
//     }
// }

void SubSequences(string str, string output, int i){
    if(i>=str.length()){
        cout<<"->"<<output<<endl;
        return;
    }

    char ch = str[i];

    SubSequences(str,output, i+1);
    output.push_back(ch);
    SubSequences(str,output, i+1);
}

int main()
{
    // int arr[] = {10, 20, 30, 40, 50};
    // int size = 5;
    // // bool ans = checkSorted(arr, size, 1);  // Start with i = 1
    // // if(ans){
    // //     cout << "Array is sorted" << endl;
    // // }
    // // else{
    // //     cout << "Array is not sorted" << endl;
    // // }

    // int ans = binarySearch(arr, 0,4, size, 0);
    // cout<<ans<<endl;

    string str = "ab";
    string output = "";

    int i =0;

    SubSequences(str,output, i);


    return 0;
}
