class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int ans = arr.size();
       unordered_map<int,int>cnts;
       for(int i=0; i<arr.size(); i++)
       {
            cnts[arr[i]]++;
            if(cnts[arr[i]]>=3)
            {
                arr.erase(arr.begin()+i);
                ans--;
                i--;
            }
       }
        
        return ans;
    }
};