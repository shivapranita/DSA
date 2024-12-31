#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int flag = 0;
    int k;
    for( int i = size - 1; i >= 0; i--)
    {
        for(int j = 0; j < size-1; j++)
        {
            k = j+1;
            if(arr[j] > arr[k])
            {
                swap(arr[j], arr[k]);
                flag = 1;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }

    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;


/*  -> It is a sorting technique where adjacent swaps are made and the max element is pushed to the last 
    for every iteration to sort the given array
    TC : (Worst case) : O(n^2) ->> When the input array is in descending order
         (Best case) : O(n) ->> When the input array is already sorted (no swaps-can break out of the loop)

         Explanation : for the 1st iteration 1 elem is pushed to last index, => runs for O(n-1) times
         for 2nd iteration - 2nd elem is pushed to the last but one index..and so on => runs for O(n-2) times
         [as there is no need to check the last index as it is sorted]
         ..                           => runs for O(n-3) times
         ..                           => runs for O(n-4) times..and so on
        Total = O(n-1) + O(n-2) + O(n-3) .. = sum of n natural nums = O(n*(n-1)/2) ~= O(n^2)

    SC : O(1) [No extra space is used]

    -> Not an efficient sorting algorithm and not used in real time, it is just for understanding basic sorting algorithms.
*/

}