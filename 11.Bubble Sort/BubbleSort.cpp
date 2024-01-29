#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // rukjao
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void bubbleSort(vector<int> &v)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &v)
{
    int size = v.size();
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (v[j] < v[minindex])
            {
                minindex = j;
            }
        }
        swap(v[i], v[minindex]);
    }
}

int main()
{ // vector<int> v = {5, 4, 3, -2, 1};
    // // bubbleSort(v);
    // // selectionSort(v);
    // insertionSort(v);
    // print(v);
    int sum2 = 0;
    for (int i = 1; i < 4; i++)
    {
        sum2 += i;
    }
    cout << sum2;
    return 0;
}