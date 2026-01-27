class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n)
            k = n;
        unordered_map<int,int>sen;
        for(int i=0; i<k; i++)
        {    
            sen[nums[i]]++;
            if(sen[nums[i]]>=2)
                return 1;
        }
        for(int i=k; i<n; i++)
        {
            sen[nums[i]]++;
            if(sen[nums[i]]>=2)
                return 1;
            sen[nums[i-k]]=0;
        }
        return 0;
    }
};