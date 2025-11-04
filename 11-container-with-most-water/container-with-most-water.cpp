class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int lf = 0, r = n - 1;
        while (lf < r) {
            ans.push_back(min(arr[lf], arr[r]) * (r - lf));
            if (arr[lf] < arr[r])
                lf++;
            else
                r--; 
        }
        return *max_element(ans.begin(), ans.end());
    }
};
