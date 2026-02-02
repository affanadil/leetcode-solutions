class Solution {
public:
    bool same(TreeNode* s, TreeNode* t)
    {
        if(!s and !t)
            return 1;
        if(s and t and s->val == t->val)
            return same(s->left, t->left) and same(s->right , t->right);
        return 0;
    }
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!t)
            return 1;
        if(!s) 
            return 0;
        if(same(s,t))
            return 1;
        return (isSubtree(s->left,t) or isSubtree(s->right, t));
    }
};