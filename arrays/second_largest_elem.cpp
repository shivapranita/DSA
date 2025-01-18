#include<bits/stdc++.h>
using namespace std;
/*
Brute force : 
* iterate through the whole array and find maximum element.
* iterate 2nd time and find the second largest i.e which is smaller than the largest element but maximum in the array except the 1st largest.
TC : O(2N)
SC : O(1)

Optimal : 
* While iterating through the array, keep 2 variables f_max(first max) and s_max(second max) as INT32_MIN - 1 and INT32_MIN  initially.
* Now keep the element in the f_max if it is larger than both f_max and s_max ; and make f_max to s_max and update f_max as current element.
* if the element is greater than the s_max, but less than the f_max update s_max to current element.
TC : O(N)
SC : O(1)
*/
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int f_max = INT32_MIN + 1;
    int s_max = INT32_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > f_max)
        {
            s_max = f_max;
            f_max = arr[i];
        }
        if(arr[i] > s_max && arr[i] < f_max)
        {
            s_max = arr[i];
        }
    }
    cout << "first max is : " << f_max << " and second max is : " << s_max << endl;
    return 0;
}