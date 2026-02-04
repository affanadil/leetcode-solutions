class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *res = root;
        while(res)
        {
            if((p->val > res-> val) and (q->val > res->val))
                res = res->right;
            else if((p->val < res-> val) and (q->val < res->val))
                res = res->left;
            else 
                return res;
        }
        return res;
    }
};