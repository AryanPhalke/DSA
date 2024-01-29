// #include <iostream>
// #include<string.h>
#include <bits/stdc++.h>
using namespace std;

int findlength(char ch[], int size)
{
    int length = 0;
    int i = 0;
    // while(i<size){
    //     if(ch[i] == '\0'){
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    //     i++;
    // }

    while (ch[i] != '\0')
    {
        length++;
        i++;
    }
    // for (int i = 0; i < size; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    return length;
}

void reverseString(char ch[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
void toUpperCase(char ch[], int n)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        char currentCharacter = ch[i];
        // Check if lowercase, then convert to uppercase
        if (currentCharacter >= 'a' && currentCharacter <= 'z')
        {
            ch[i] = currentCharacter - 'a' + 'A';
        }
        i++;
    }
}

void remove(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char curr = ch[index];

        if (curr == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int n) {
    int i = 0;
    int j = n-1;

    while (i <= j)
    {
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
    
}

int main()
{
    char ch[100] = "Racecar";
    // toUpperCase(ch, 20);
    // cout << ch[0] << endl;
    // remove(ch, 20);
    // cout << ch << endl;
    // char ch[100];
    // cin.getline(ch,100);
    // cout<<"Before Swap Character is "<< ch <<endl;
    int len = findlength(ch, 100);
    cout<<checkPalindrome(ch,len);
    // // reverseString(ch,len);
    // strrev(ch);
    // cout<<"After Swap Character is "<< ch <<endl;

    // cout << "Lenght of the string is " << len << endl;
    // cout << "Lenght of the string is " << strlen(ch) << endl;

    // creation
    // char ch[10];
    // // Taking Input

    // cin.getline(ch, 10);

    // cout<<ch<<endl;

    // for (int i = 0; i < 20; i++)
    // {
    //     cout<<"Character at "<<i<<" is "<<ch[i]<<endl;
    // }
    // char temp = ch[6];
    // int ans = (int)temp;
    // cout<<"Value is "<<ans<<endl;
    return 0;
}