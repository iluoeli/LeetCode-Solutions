/*
 * 94. Binary Tree Inorder Traversal
 */


#include "common.h"


#if LEET_CODE == 94

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode* > st;
        TreeNode *p = root;

        if (root == NULL)
            return res;

        do {
            while (p != NULL) {
                st.push(p);
                p = p->left;
            }

            p = st.top(); st.pop();
            res.push_back(p->val);
            p = p->right;
        } while (!st.empty() || p != NULL);

        return res;
    }

};

int main()
{
    cout << "94. Binary Tree Inorder Traversal" << endl;

    return 0;
}


#endif
