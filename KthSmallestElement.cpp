//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

#include<queue>
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
       priority_queue<int> maxH;
       for(int i = l; i<=r; i++)
       {
           maxH.push(arr[i]);
           if(maxH.size()>k)
           maxH.pop();
       }
       return maxH.top();
    }
};