#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    /*removing duplicates in a sorted array i.e 1,1,2,2,2,4,4,5,6,6,7
    keep a pointer at start i.e. i and another pointer j at i+1 and increment until you find a different number
    (ignoring duplicate values).
    and place it at i+1 position and increment i.
    */
   int i = 0;
   for(int j = i + 1; j < n; j++)
   {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
   }

    for(int k = 0; k < i+1; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}