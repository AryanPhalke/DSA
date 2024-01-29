#include<iostream>
using namespace std;

void incrementby1(int &n){
    n=n+1;
    // return n;
}

int main()
{
    // int k = 5;

    // int &c = k;
    // int &m = k;
    // m++;

    // cout<<k<<endl;
    // cout<<c<<endl;
    // cout<<m<<endl;
    // return 0;

    int n;
    cin>>n;
    incrementby1(n);
    cout<<"n: "<<n <<endl;
}

