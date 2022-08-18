//https://practice.geeksforgeeks.org/problems/nearly-sorted-1587115620/1

#include<queue>
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int> v;
       priority_queue<int,vector<int>,greater<int>> minH;
       for(int i =0; i< num; i++)
       {
           minH.push(arr[i]);
           if(minH.size() > K)
           {
              v.push_back(minH.top());
              minH.pop();
           }
       }
       while(minH.size()!=0)
       {
           v.push_back(minH.top());
           minH.pop();
       }
       
       return v;
    }
};
