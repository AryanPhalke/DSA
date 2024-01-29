#include<iostream>
using namespace std;

int sum(int a,int b,int c){
    return a+b+c;
}

void max(int a,int b,int c){
    // if(a>b && a>c){
    //     return a;
    // }
    // else if(b>a && b>c){
    //     return b;
    // }
    // else {
    //     return c;
    // }
    int ans1 = max(a,b);
    int finalAns = max(ans1,c);
    cout<<"Final nas is "<<finalAns<<endl;
}

int count(int a){
    for (int i = 1; i <=a; i++)
    {
        cout<<i<<endl;
    }
}

int prime(int a){
    int k=1;
    for (int i = 2; i <a; i++)
    {
        if(a%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    
}

int EvenOdd(int a){
    if(a%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
}

int SUMALL(int a){
    int k=0;
    for (int i = 1; i <=a; i++)
    {
        k = k+i;
    }
    cout<<k;
}

int EVENALL(int a){
    int k=0;
    for (int i = 1; i <=a; i++)
    {
        if(i%2==0){
            cout<<i<<endl;
            k=k+i;
            // cout<<k<<endl;
        }
    }
    cout<<k<<endl;
}

int area(int r){
    return 3.14*r*r;
}

int factorial(int a){
    int k=1;
    for (int i = 1; i <=a; i++)
    {
        k=i*k;
    }
    cout<<k;
}

void ALLPRIME(int a){
    for (int i = 1; i <a; i++)
    {
        if(a%i==0){
            
        }
        else{
            cout<<i<<endl;
        }
    }
    
}

// int kmtomiles(int km){
//     return (km*0.62137);
// }

int temp(int f){
    int c = (f-32)*5/9;
    return c;
}

int main()
{
    max(4,6,6);
    // cout<<"Max number is "<<(max(12,8,6))<<endl;
    // cout<<"Counting is "<<count(10)<<endl;
    // cout<<"The number is "<<prime(7)<<endl;
    // EvenOdd(10);
    // SUMALL(10);
    // cout<<area(4)<<endl;
    // EVENALL(10);
    // factorial(5);
    ALLPRIME(10);
    // int a;
    // cin>>a;
    // cout<<"Temp in c is "<<temp(a)<<endl;
    return 0;
}