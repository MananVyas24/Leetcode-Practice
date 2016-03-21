/**
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following is not:
    1
   / \
  2   2
   \   \
   3    3
**/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
bool recCheck(struct TreeNode* N1, struct TreeNode* N2)
{
    if(N1 == NULL && N2 == NULL)
        return true;
    
    if(N1 && N2 && N1->val == N2->val)
        return (recCheck(N1->left, N2->right) && recCheck(N1->right, N2->left));
    
    return false;
}
 
bool isSymmetric(struct TreeNode* root) 
{
    return (recCheck(root, root));
}