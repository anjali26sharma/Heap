//https://leetcode.com/problems/top-k-frequent-elements/

typedef pair<int,int> p;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i =0; i<nums.size();i++)
            mp[nums[i]]++;
        priority_queue<p,vector<p>,greater<p>> minH;
        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            minH.push({i->second,i->first});
            if(minH.size()>k)
                minH.pop();
        }
        vector<int> v;
        while(minH.size()>0)
        { v.push_back(minH.top().second);
            minH.pop();
         }
        reverse(v.begin(), v.end());
        return v;
    }
    
};
