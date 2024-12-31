#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //-----------------------algorithm--------------------//
    int j;
    for(int i = 0; i < n; i++)
    {
        j = i;
        while(j > 0 && (arr[j-1] > arr[j]))
        {
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
    //----------------------algorithm----------------------//

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
/* It is a sorting technique where we select each element and position it in the correct place.
-> Consider at first the size is 1, next 2 , next 3..and deal with this
-> check if 1 element is sorted ( which is yes obvio)
-> check if 2nd element is positioned correctly in the 2 size array, by comparing it with previous elements in the array
-> if any element is is greater swap it and swap it until it reaches the correct position.
-> repeat it for all elements by incrementing the index for iterating
TC : Wost case and average case : O(n^2)
     Best Case : O(n) [when i/p array is sorted] 
Explanation : 1st it's running for 1 time, next 2 times, ..and so on until the whole array completes
so O(1) + O(2) + O(3) + .. + O(n-1) = O(n*(n-1)/2) ~= O(n^2)

SC : O(1) [ no extra space is used]

-> Better than bubble sort -> why ? no unecessary swaps even when array is sorted
Better than selection sort -> preserves the order of elements in the i/p array

*/
    
}
