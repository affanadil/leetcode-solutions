class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> mp;
        for (auto it : nums)
            mp[it]++;

        vector<int> ans;
        for (auto it : mp) {
            if (it.second == 2)
                ans.push_back(it.first);
            if (ans.size() == 2)
                return ans;
        }
        return ans;
    }
};
