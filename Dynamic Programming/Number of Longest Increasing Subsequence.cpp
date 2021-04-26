class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 0, maxi = 0;
        vector<pair<int,int>>dp(n,{1,1});
        //dp[i]: {length, number of LIS which ends with nums[i]}
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j])
                {
                    if(dp[i].first == dp[j].first + 1)
                        dp[i].second += dp[j].second;
                    else if(dp[i].first < dp[j].first + 1)
                    {
                        dp[i].first = dp[j].first + 1;
                        dp[i].second = dp[j].second;
                    }
                }
            }
            
            if(maxi == dp[i].first)
                ans += dp[i].second;
            if(maxi < dp[i].first)
            {
                maxi = dp[i].first;
                ans = dp[i].second;
            }
        }
        
        return ans;
        
        
    }
};
