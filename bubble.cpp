#include <iostream>
using namespace std;
int main()
{
    int arr[10000] = {31, 41, 59, 26, 41, 58};
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}