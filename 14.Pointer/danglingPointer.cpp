#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr = &a;
    cout<<*ptr<<endl;
    free(ptr);
    cout<<*ptr<<endl;
    return 0;
}