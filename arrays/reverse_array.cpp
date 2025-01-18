#include<bits/stdc++.h>
using namespace std;
int main(){
  int size;
  cin >> size;
  int arr[100000];
  for( int i = 0; i < size; i++ )
  {
    cin >> arr[i];  
  }
  int start = 0;
  int end = size-1;
  while( start < end )
  {
    swap( arr[start], arr[end] );
    start++;
    end--;
  }
  cout << "reversed array is: "<<endl;
  for(int i = 0; i< size; i++)
  {
    cout<<arr[i]<<" ";
  }

    return 0;
}
    /*brute force way: 
    -> create another array of same size and itreate through the array from backwards
    -> and push it to the new array and then iterate through new array 
    -> and replace the org array contents.
    TC : O(n)[for iterating once in org array] + O(n)[for iterating in the new array] + O(n)[for iterating through org array]
    total TC = O(3n)
    SC : O(n) where n is the size of an array
    */

   /*optimal : 
   -> iterate through the array once by keeping 2 pointers one at 0 index and one at n-1 index
   -> swap both and after every swap increment the pointer at start  and decrement the pointer at end
   -> until start > end.
   TC : O(n)
   SC : O(1) - no extra space is used except the input array space.
   */