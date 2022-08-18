//https://leetcode.com/problems/find-k-closest-elements/

#include<queue>
#include<vector>
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxH;
        for(int i =0; i<arr.size(); i++)
        {
            maxH.push({abs(arr[i]-x), arr[i]});
            if(maxH.size()> k)
                maxH.pop();
        }
        vector<int> v;
        while(maxH.size() > 0)
        {   
            v.push_back(maxH.top().second);
            maxH.pop();
        }
        sort(v.begin(), v.end());
      return v;
    }
};
