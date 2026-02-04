class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if (!root)
            return res;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            int qlen = q.size();
            vector<int> cur;
            for (int i = 0; i < qlen; i++)
            {
                TreeNode *nd = q.front();
                q.pop();
                if (nd)
                {
                    cur.push_back(nd->val);
                    q.push(nd->left);
                    q.push(nd->right);
                }
            }
            if (!cur.empty())
                res.push_back(cur);
        }
        return res;
    }
};