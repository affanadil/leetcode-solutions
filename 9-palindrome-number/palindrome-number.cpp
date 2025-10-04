class Solution {
public:
    bool isPalindrome(int x) {
        string k = to_string(x), x2 = to_string(x);
        ::reverse(x2.begin(),x2.end());
        return (k == x2);
    }
};