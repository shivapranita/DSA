#include<bits/stdc++.h>
using namespace std;
int sort_it(int arr[], int strt, int end)
{
    int i = strt;
    int j = end;
    int pivot = strt;
    while(i < j)
    {
        while(arr[i] < arr[pivot] && i < end - 1)
        {
            i++;
        }
        while(arr[j] >= arr[pivot] && j >= strt + 1)
        {
            j--;
        }
        if(i < j)
        {
            swap(arr[i],arr[j]);
        }
    }
  
    swap(arr[pivot],arr[j]);
    return j;
}
void quick_sort(int arr[], int strt, int end)
{
    if(strt >= end)
    {
        return;
    }
    int ind = sort_it(arr, strt, end);
    quick_sort(arr,strt,ind - 1);
    quick_sort(arr, ind + 1, end);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //-----------------------algorithm--------------------//
    int strt = 0;
    int end = n-1;
    quick_sort(arr, strt, end);

    //-----------------------algorithm--------------------//
     for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
/*
*/
}