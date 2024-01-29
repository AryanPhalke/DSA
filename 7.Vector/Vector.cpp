#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << endl;
    }
}

void print2(vector<int> v)
{
    for(auto it:v){
        cout<<it<<" ";
    }
}

int main()
{
    vector<int> v;
    vector<int>arr(5,-1);

    vector<int>arr5={1,2,3,4,5};
    vector<int>arr6(arr5);
    print2(arr6);

    cout<<arr5.front()<<endl;
    cout<<arr5.back()<<endl;


    // arr.push_bak(60);
    // print(arr);

    // while (1)
    // {
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    //     cout<<"Capacity: "<<v.capacity()<<"SIze: "<<v.size()<<endl;
    // }
    
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // v.push_back(6);

    // print(v);

    // v.pop_back();
    // v.pop_back();

    // int n;
    // cin>>n;

    // for (int i = 0; i < n; i++)
    // {
    //     int d;
    //     cin>>d;
    //     v.push_back(d);
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     v.push_back(80);
    // }
    

    // // print(v);
    
    // print(v);
    return 0;
}