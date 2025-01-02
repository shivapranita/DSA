#include<bits/stdc++.h>
using namespace std;
void merge_arr(int arr[],int strt, int mid, int end)
{
    int i = strt;
    int j = mid + 1;
    vector<int> temp;
    while(i <= mid && j <= end)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    //for any remaining elements in an array
    while(i < j)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = strt; i <= end; i++)
    {
        arr[i] = temp[i - strt];//as the arr doesn't always strt from 0 and strts from strt.
    }

}
void merge_sort(int arr[], int strt, int end)
{
    if(strt >= end)
    {
        return;
    }
    int mid = strt + (end - strt) / 2;
    merge_sort(arr, strt, mid);
    merge_sort(arr, mid+1, end);
    merge_arr(arr,strt,mid,end);
  

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
    merge_sort(arr,0,n-1);
    //-----------------------algorithm--------------------//
     for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
/* 
-> It is a sorting technique, where we use divide and conquer approach to sort an array.
-> Divide the whole array into 2 parts using middle element until there is only one element in each subarray.
-> merge all the subarrays while sorting them in correct order until the whole array is formed.
TC : O(nlogn)
SC : O(n)
Explanation : 
*/
}