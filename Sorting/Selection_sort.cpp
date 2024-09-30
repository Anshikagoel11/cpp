// selection sort - find minimum and swap with staring starting elem.

#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (arr[mini] > arr[j]) // find minimum
                mini = j; 
            
        }
        //or // swap(arr[i],arr[mini]);
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Selection_Sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}