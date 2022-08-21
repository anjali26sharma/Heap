//https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>> minH;
        for(int i =0 ; i<n; i++)
        minH.push(arr[i]);
        long long sum =0;
        long long top, second_top,ans;
        while(minH.size()>1)
        {
            top = minH.top();
            minH.pop();
            second_top = minH.top();
            minH.pop();
            ans = top + second_top;      //adding top two minimum length ropes -- we'll get a new rope
            sum+=ans;                   //final cost sum
            minH.push(ans);            //pushing length of new rope into the array.
        }
        return sum;
    }
};
