class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int> cnts;
        for (auto it:nums)
            cnts[it]++;
        long long ans = 0;
        for(auto it:cnts)
            if(it.second%k == 0)
                ans+=it.first*it.second;
        return ans;
    }
};