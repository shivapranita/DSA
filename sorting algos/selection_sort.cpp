#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for( int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int minimum ;
    for( int i = 0; i < n-1 ; i++)
    {
        minimum = i;
        for(int j = i; j < n; j++)
        {
            if(arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        swap(arr[i], arr[minimum]);
    }
    for( int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
/* It is a sorting technique where we SELECT minimum element of the array and swap it .
    -> select the min elem from the array and swap it with 0 index  (runs from 0th to n-1).
    -> in the 2nd iteration selects the minimum from the unsorted array and swaps it with 1st index (runs from 1st to n-1)
    -> in the 3rd iteration selects the minimum from the unsorted array and swaps it with 2nd index (runs from 2nd to n-1)
    ..
    .. and so on
    TC : O(n-1) + O(n-2) + O(n-3) + .... = O((n*(n-1))/2) ~= O(n^2)
    SC : O(1) [No extra space is used]
    -> Not an efficient sorting algorithm and not used in real time, it is just for understanding basic sorting algorithms.
*/

}