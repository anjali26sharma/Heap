//https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int,int>>> maxH;
        int n = points.size();
        for(int i = 0; i < points.size(); i++)
        {
            maxH.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}}); //pushing distace{x^2 + y^2} as key & (x,y) point pair
            if(maxH.size()>k)
                maxH.pop();
        }
        vector<vector<int>> v;
        while(maxH.size()>0)
        {   
            pair<int,int> p = maxH.top().second;
            v.push_back({p.first,p.second});      //pushing point pair in vector v that stores elements as a vector of size 2 i.e, x and y co-ordinates of point pair
            maxH.pop();
        }
        return v;
    }
};
